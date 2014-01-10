<?php

/** 
 * Create a user menu block for politicians
 * Implements hook_block_info
 */  
function misc_modifications_block_info() {    
  $blocks['politik_user_menu'] = array(
    // info: The name of the block.
    'info' => t('User menu for politikere'),
  );
  return $blocks;
}

/** 
 * Implements hook_block_view
 */
function misc_modifications_block_view($delta = '') {

	
	
  // The $delta parameter tells us which block is being requested.
  switch ($delta) {
    case 'politik_user_menu':
      // Create block content here
      $block['subject'] = t('');
      global $user; //decl var
	  if ($user->uid) : //assing
      $username = $user->name;
      $block['content'] = '<p>' . $username . ' | <a href="/user/logout">Log ud</a></p>';
      //else:
      //$block['content'] = '<a href="user">Log ind</a>';
	  endif;  
     
      break;
  }
  return $block;
}