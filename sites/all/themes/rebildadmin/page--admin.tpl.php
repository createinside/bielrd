<?php 
global $user;
$sti = current_path();
$bruger = user_load($user->uid, $reset = FALSE);


?>
<?php if ($sti == 'admin/workbench') { ?>
  <div id="branding" class="clearfix">
    <?php print $breadcrumb; ?>
    <?php print render($title_prefix); ?>
    <?php if ($title): ?>
     <div id="side_titel"> <h1 class="page-title"><?php print $title; ?>: <?php if ($sti == 'admin/workbench') { print $bruger->field_user_navn['und'][0]['safe_value']; } ?></h1> </div>
    <?php endif; ?>
     <?php print render($primary_local_tasks); ?>
    <?php print render($title_suffix); ?>
   
  </div>

  <div id="page">

    <?php if ($secondary_local_tasks): ?>
      <div class="tabs-secondary clearfix"><?php print render($secondary_local_tasks); ?>
      	<div class="min-profil"><li><a href="/user/<?php print $user->uid ?>/edit">Redigér profil</a></li><li><a href="/user/logout">Log ud</a></li></div>
      </div>
    <?php endif; ?>

    <div id="content" class="clearfix">
      <div class="element-invisible"><a id="main-content"></a></div>
      <?php if ($messages): ?>
        <div id="console" class="clearfix"><?php print $messages; ?></div>
      <?php endif; ?>
      <?php if ($page['help']): ?>
        <div id="help">
          <?php print render($page['help']); ?>
        </div>
      <?php endif; ?>
      <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>


	<div id="min_profil_side">
		<div class="min_profil_top">
			<?php print render($page['content']['system_main']['workbench_edited']); ?>
			<?php print render($page['content']['system_main']['workbench_current_user']); ?>			
		</div>
		<div class="min_profil_middle">
			<?php print render($page['content']['system_main']['workbench_recent_content']); ?>
			
			<?php //Print kontakt block defineret i template.php
				print $worbench_contact_block; ?>				
		</div>
		<div class="min_profil_bottom">
			<?php print render($page['content']['system_main']['workbench_recent_content2']); ?>	
		
		</div>
	</div>
    </div>

    <div id="footer">
      <?php print $feed_icons; ?>
    </div>

  </div>
<?php } 
	else { ?>
		
  <div id="branding" class="clearfix">
    <?php print $breadcrumb; ?>
    <?php print render($title_prefix); ?>
    <?php if ($title): ?>
    <div id="side_titel">
      <h1 class="page-title"><?php print $title; ?></h1>
    </div>
    <?php endif; ?>
    <?php print render($title_suffix); ?>
    <?php print render($primary_local_tasks); ?>
  </div>

  <div id="page">
    <?php if ($secondary_local_tasks): ?>
      <div class="tabs-secondary clearfix"><?php print render($secondary_local_tasks); ?></div>
    <?php endif; ?>

    <div id="content" class="clearfix">
      <div class="element-invisible"><a id="main-content"></a></div>
      <?php if ($messages): ?>
        <div id="console" class="clearfix"><?php print $messages; ?></div>
      <?php endif; ?>
      <?php if ($page['help']): ?>
        <div id="help">
          <?php print render($page['help']); ?>
        </div>
      <?php endif; ?>
      <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
      <?php print render($page['content']); ?>
    </div>

    <div id="footer">
      <?php print $feed_icons; ?>
    </div>

  </div>

<?php		
	}
?>	