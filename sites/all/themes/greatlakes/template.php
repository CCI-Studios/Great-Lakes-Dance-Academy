<?php
function greatlakes_form_alter(&$form, $form_state, $form_id) {
	if ($form_id == 'webform_client_form_37')
	{
		$form['#action'] = '/contact-0';
	}

}
?>