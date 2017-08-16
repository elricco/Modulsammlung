<?php

//get config
$ewsConfig = rex_var::toArray("REX_VALUE[20]");

//fetch items
$items = rex_var::toArray("REX_VALUE[1]");

if(rex::isBackend()) {
    //get core version
    $coreVersion = rex_config::get('core', 'version');
    //show debug
    if ($owlConfiguration[0]['debug'] == 'true') {
        if ($coreVersion < '5.3.0') {
            echo '<pre>';
            print_r(rex_var::toArray("REX_VALUE[1]"));
            print_r(rex_var::toArray("REX_VALUE[20]"));
            echo '</pre>';
        } else {
            echo '<pre>';
            dump(rex_var::toArray("REX_VALUE[1]"));
            dump(rex_var::toArray("REX_VALUE[20]"));
            echo '</pre>';
        }
    }

    //show what was edited
    $output = '';
}
else {

}

if (!rex::isBackend()): ?>

<?php endif;