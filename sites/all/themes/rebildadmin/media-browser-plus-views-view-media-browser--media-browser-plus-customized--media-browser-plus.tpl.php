<?php
/**
 * @file
 * View template to display a grid of media previews in the media browser.
 *
 * @see views-view-list.tpl.php
 * @see template_preprocess_media_views_view_media_browser()
 * @ingroup views_templates
 */    
?>
<?php print $wrapper_prefix; ?>
<table>
  <thead>
    <tr>
      <?php if(!empty($folders)) : ?><th width="200"><?php print t('Folders') ?></th><?php endif; ?>
      <th width="*"><?php print t('Media Files') ?></th>
    </tr>
  </thead>
  <tbody>
	  <tr>
		  <td class="mbp-toolbar-folders">
			  <?php 
				   
				   // Render folder operation links
				   $current_folder = $view->exposed_raw_input['mbp_current_folder'];
				   
				   print l("Opret", 'admin/media_browser_ux/add_folder/'.$current_folder, array('attributes' => array('class' => 'add-folder button')));
				   print l("Slet", 'admin/media_browser_ux/delete_folder/'.$current_folder, array('attributes' => array('class' => 'delete-folder button')));
			  ?>
			</td>
		  <td class="mbp-toolbar-files">
  				<?php
	  				// Render file operation links 
	  				print $view->footer['media_browser_plus_views_handler_area_actions']->render(); 
	  			?>
		  </td>
	  </tr>
    <tr>
      <?php if(!empty($folders)) : ?>
      <td class="mbp-folders">
	      <?php print $folders ?>
	    </td>
      <?php endif; ?>
      <td class="mbp-file-list">
        <?php print $list_type_prefix; ?>
        <?php foreach ($rows as $id => $row): ?>
          <li id="media-item-<?php print $view->result[$id]->fid; ?>" class="<?php print $classes_array[$id]; ?>">
            <?php print $row; ?>
          </li>
        <?php endforeach; ?>
        <?php print $list_type_suffix; ?>
        <div id="status"></div>
      </td>
    </tr>
  </tbody>
</table>
<?php print $wrapper_suffix; ?>