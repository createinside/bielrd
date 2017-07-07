<ul id="facebook-feed">
<?php
$limit = 3;
$i = 0;
?>
<?php foreach ($items as $item): ?>
  <?php if(isset($item->message) && $i < $limit): ?>

  <?php
  if(isset($item->id)) {
    $param = str_replace("_", "/posts/", $item->id);
    $link = "https://www.facebook.com/" . $param;
  }
  elseif(isset($item->object_id)) {
    $link = "https://www.facebook.com/rebildkommune/posts/" . $item->object_id;
  }
  else {
    $link = $item->link;
  }
  ?>

  <li class="item">
  <a href="<?php print $link ?>" target="_blank">
  <?php if (isset($item->from)): ?>
    <div class="facebook-feed-author">
      <span class="facebook-feed-picture"><img alt="<?php echo $item->from->name; ?>" src="https://graph.facebook.com/<?php echo $item->from->id; ?>/picture" /></span>
      <span class="facebook-feed-from"><?php echo $item->from->name; ?></span>
      <span class="facebook-feed-time"><?php echo t('!time ago.', array('!time' => format_interval(time() - strtotime($item->created_time)))); ?></span>
    </div>
  <?php endif; ?>
    <div class="facebook-feed-message">
      <?php
      $message = str_replace("\n\n","\n", $item->message);
      $message = nl2br($message, false);
      if (isset($item->message)) {
        print truncate_utf8($message, 50, FALSE, TRUE);
      }
      ?>
    </div>
    <div class="facebook-feed-feedback">
      <?php if (isset($item->likes)) { ?><span class="facebook-feed-likes"><span class="icon-thumbs-up"></span><?php echo count($item->likes->data); ?></span><?php } ?>
      <?php if (isset($item->comments)) { ?><span class="facebook-feed-comments">&middot;	<?php echo count($item->comments->data) . ' ' . t('comments'); ?></span><?php } ?>
    </div>
  </a>
  </li>
  <?php $i++; ?>
  <?php endif; ?>
<?php endforeach; ?>
</ul>
<div class="facebook-feed-footer">
  <a href="//facebook.com/profile.php?id=<?php echo $item->from->id; ?>" target="_blank">
  <span class="icon-brand"></span>
  <p>
    <strong>Følg os på Facebook</strong>
    <span>Det gør mere end 7.000</span>
  </p>
  </a>
</div>
