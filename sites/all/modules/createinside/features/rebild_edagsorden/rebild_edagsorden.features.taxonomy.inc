<?php
/**
 * @file
 * rebild_edagsorden.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function rebild_edagsorden_taxonomy_default_vocabularies() {
  return array(
    'edagsorden_committees' => array(
      'name' => 'eDagsorden udvalg',
      'machine_name' => 'edagsorden_committees',
      'description' => '',
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
