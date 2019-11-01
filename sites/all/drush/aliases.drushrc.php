<?php

$aliases['dev'] = array(
	'uri'=> 'greatlakes.ccistaging.com',
	'root' => '/home/staging/subdomains/greatlakes/public_html',
	'remote-host'=> 'host.ccistudios.com',
	'remote-user'=> 'staging',
	'path-aliases'=> array(
		'%files'=> 'sites/default/files',
		'%drush-script' => '/home/staging/.composer/vendor/bin/drush'
	)
);

$aliases['live'] = array(
	'uri'=> 'live.greatlakesacademy.com',
	'root' => '/home/greatlakes/subdomains/live/public_html',
	'remote-host'=> 'host.cciserver2.com',
	'remote-user'=> 'greatlakes',
	'path-aliases'=> array(
		'%files'=> 'sites/default/files',
		'%drush-script' => '/home/greatlakes/.composer/vendor/bin/drush'
	)
);

