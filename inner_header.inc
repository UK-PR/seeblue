<?php

$description = theme_get_setting("site_description");

?>
<style type="text/css">
	#header-inner .wrap-inner {
		background: #004da8 url(<?php print file_create_url(theme_get_setting('background_logo_path')); ?>) left center no-repeat;
		background-size: contain;
	}
</style>
<header id="header">
	<div id="header-inner">
		<div class="wrap-inner section cf"> 
			<!-- start logo -->
			<h1 class="alignleft" id="logo-inner">
			<a title="KENTUCKY" href="/"><img title="KENTUCKY" alt="site logo" src="<?php print file_create_url(theme_get_setting("logo_path"));; //echo $logo; ?>"></a>
			</h1>
			<!-- end logo -->
			<div class="head-right alignright">

				<div class="content">
					<h1><?php echo $site_name; ?></h1>
				</div>

			</div>
		</div>
	</div>
</header>