<?php
/**
 * @file
 * rebild_user_profile.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function rebild_user_profile_taxonomy_default_vocabularies() {
  return array(
    'centrer' => array(
      'name' => 'Centrer',
      'machine_name' => 'centrer',
      'description' => 'Liste med centrer i Rebild kommune',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
