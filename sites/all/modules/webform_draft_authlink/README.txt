CONTENTS OF THIS FILE
----------------------

  * Introduction
  * Installation
  * Configuration


INTRODUCTION
------------
This module is a Webform extension to allow save draft submissions to anonymous
users and complete this form later with an authlink.

Maintainer: GeduR (https://www.drupal.org/u/gedur)
Project page: https://www.drupal.org/project/webform_draft_authlink


INSTALLATION
------------
1. Apply the next patch:
   https://www.drupal.org/node/2682057#comment-10938171
2. Copy webform_draft_authlink folder to modules directory (usually sites/all/modules/contrib).
3. Enable the module. It's in the package Webform.


CONFIGURATION
-------------
1. First of all, create or edit a webform.
2. Go to WEBFORM -> Form settings (node/X/webform/configure)
3. Then, in the section Advanced settings, check the next items:
   - Check: Show "Save draft" button.
   Then you should see the next check:
   - Check: Allow "Save draft" authlink.
4. Finally, Save configuration.
