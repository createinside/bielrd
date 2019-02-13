<?php

/**
 * This function generates the SBSYS XML, fills it with values and returns is as string
 *
 * @param $params
 * @return string
 */
function bellcom_webform_module_sbsys_xml($params) {
  $nemid_cpr = bellcom_webform_module_sbsys_xml_get_value_by_type('nemid_cpr', $params);
  $nemid_com_cvr = bellcom_webform_module_sbsys_xml_get_value_by_type('nemid_com_cvr', $params);
  if (isset($nemid_com_cvr) && !empty($nemid_com_cvr)) {
    $message = cvr_serviceplatformen_query_info($nemid_com_cvr);
    $nemid_name = htmlspecialchars($message['company_name']);
    $nemid_address = htmlspecialchars($message['company_street'] . ' ' . $message['company_house_nr'] . ' ' . $message['company_']);
    $nemid_city = htmlspecialchars($message['company_city']);
    $nemid_zipcode = htmlspecialchars($message['company_zipcode']);
}
  if (isset($nemid_cpr) && !empty($nemid_cpr)) {
    $message = vcv_serviceplatformen_get_address($nemid_cpr);
    $nemid_name = htmlspecialchars($message['name']);
    $nemid_address = htmlspecialchars($message['road'] . ' ' . $message['road_no'] . ' ' . $message['floor'] . ' ' . $message['door']);
    $nemid_city = htmlspecialchars($message['city']);
    $nemid_zipcode = htmlspecialchars($message['zipcode']);
  }
 
  $config = bellcom_webform_get_setting($params['node']->nid);
  $os2formsId = bellcom_webform_get_setting_value('os2formsId', $config, $params);
  $kle = bellcom_webform_get_setting_value('kle', $config, $params);
  $sagSkabelonId = bellcom_webform_get_setting_value('sagSkabelonId', $config, $params);
  $bodyText = bellcom_webform_get_setting_value('bodyText', $config, $params);

  $webform = node_load($params['node']->nid);
  $webform_title = htmlspecialchars($webform->title);
  $fields = bellcom_webform_module_sbsys_xml_get_fields_to_list($params);

  if (isset($fields['antal_rum_max'])) {
    $maxRoom = htmlspecialchars($fields['antal_rum_max']);
  }
  if (isset($fields['antal_rum_min'])) {
    $minRoom = htmlspecialchars($fields['antal_rum_min']);
  }
  if (isset($fields['priority_1'])) {
    $priorities = array();
    for($i=1;  $i<=4; $i++) {
      if ($fields['priority_'.$i])
          $priorities[] = htmlspecialchars($fields['priority_'.$i]);
    }
  }

  $xml = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>
<os2formsFormular>
  <OS2FormsId>$os2formsId</OS2FormsId>
  <SBSYSJournalisering>
    <PrimaerPartCprNummer>" . ((!empty($nemid_cpr)) ? $nemid_cpr : '' ) . "</PrimaerPartCprNummer>
    <PrimaerPartCvrNummer>" . ((!empty($nemid_com_cvr)) ? $nemid_com_cvr : '') . "</PrimaerPartCvrNummer>
    <KLe>$kle</KLe>
    <SagSkabelonId>$sagSkabelonId</SagSkabelonId>
  </SBSYSJournalisering>
  <DigitalForsendelse>
    <Slutbruger>
      <CprNummer>" . ((!empty($nemid_cpr)) ? $nemid_cpr : ''  ) . "</CprNummer>
      <CvrNummer>" . ((!empty($nemid_com_cvr)) ? $nemid_com_cvr : '') . "</CvrNummer>
      <Navn>" . ((isset($nemid_name)) ? $nemid_name : '') . "</Navn>
      <Adresse>" . ((isset($nemid_address)) ? $nemid_address : '') . "</Adresse>
      <Postnr>" . ((isset($nemid_zipcode)) ? $nemid_zipcode : '') . "</Postnr>
      <Postdistrikt>" . ((isset($nemid_city)) ? $nemid_city : '') . "</Postdistrikt>
    </Slutbruger>
    <Kvittering>
      <TitelTekst>$webform_title</TitelTekst>
      <BodyTekst>$bodyText</BodyTekst>
    </Kvittering>
    <MaaSendesTilDFF>ja</MaaSendesTilDFF>";

  if (isset($minRoom) || isset($maxRoom)) {
    $xml .= "<Room>
      <Min>$minRoom</Min>
      <Max>$maxRoom</Max>
    </Room>";
  }

  if (!empty($priorities)) {
    $xml .= "<Omraade>" . implode(',', $priorities) . "</Omraade>";
  }
  $xml .= "</DigitalForsendelse>
  <FormularData>";
  
  foreach ($fields as $field_name => $field_value) {
    $field_value = htmlspecialchars($field_value);
    $xml .= "<$field_name>$field_value</$field_name>";
  }
  $xml .= "</FormularData>
</os2formsFormular>";
  return $xml;
}

/**
 * Helper function to get element component ID (CID) from the element type
 *
 * @param $type
 * @param $params
 * @return int|string
 */
function bellcom_webform_module_sbsys_xml_get_cid_by_type($type, $params) {
  $components = $params['node']->webform['components'];

  foreach($components as $cid => $component) {
    if ($component['type'] == $type) {
      return $cid;
    }
  }
}

/**
 * Helper function to get element component ID (CID) from the element form_key
 *
 * @param $type
 * @param $params
 * @return int|string
 */
function bellcom_webform_module_sbsys_xml_get_cid_by_form_key($form_key, $params) {
  $components = $params['node']->webform['components'];

  foreach($components as $cid => $component) {
    if ($component['form_key'] == $form_key) {
      return $cid;
    }
  }
}


/**
 * Helper function to get element submitted value from the the element type
 *
 * @param $type
 * @param $params
 * @return mixed
 */
function bellcom_webform_module_sbsys_xml_get_value_by_type($type, $params) {
  $data = $params['submission']->data;

  $cid = bellcom_webform_module_sbsys_xml_get_cid_by_type($type, $params);
  if ($cid) {
    return reset($data[$cid]);
  }
}

/**
 * Helper function to get element submitted value from the the element form_key
 *
 * @param $form_key
 * @param $params
 * @return mixed
 */
function bellcom_webform_module_sbsys_xml_get_value_by_form_key($form_key, $params) {
  $data = $params['submission']->data;

  $cid = bellcom_webform_module_sbsys_xml_get_cid_by_form_key($form_key, $params);
  if ($cid) {
    return reset($data[$cid]);
  }
}

/**
 * Helper function the returns the list of the fields and their values as an array.
 * All field except the field with type markup (used for formatting) are returned
 *
 * @param $params
 * @return array
 */
function bellcom_webform_module_sbsys_xml_get_fields_to_list($params) {
  $fields_to_list = array();
  $data = $params['submission']->data;
  foreach ($params['node']->webform['components'] as $cid => $element) {
    $field_name = $element['form_key'];
    $field_name = preg_replace('/\W/', '_', $field_name);
    if ($element['type'] == 'markup') {
      $fields_to_list[$field_name] = $element['value'];
    }
    elseif ($data && isset($data[$cid])) {
      $fields_to_list[$field_name] = reset($data[$cid]);
    }
  }
  return $fields_to_list;
}
