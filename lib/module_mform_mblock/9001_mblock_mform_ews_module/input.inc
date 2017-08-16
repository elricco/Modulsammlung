<?php

// this modul input uses the mform addon
// this modul input uses the mblock addon

if(rex_addon::get('mform')->isAvailable() && rex_addon::get('mblock')->isAvailable()) {
    echo '<p>YAY!</p>';
    // base ID
    $id = 1;

    // init mform
    $mform = new MForm();

    // fieldset
    $mform->addTab('Einstellungen');

    //one column
    $grid_12   = '12';

    //two column
    $grid_12_1 = '12_1';
    $grid_1_11 = '1_11';
    $grid_2_10 = '2_10';
    $grid_3_9  = '3_9';
    $grid_4_8  = '4_8';
    $grid_5_7  = '5_7';
    $grid_6_6  = '6_6';
    $grid_7_5  = '7_5';
    $grid_8_4  = '8_4';
    $grid_9_3  = '9_3';
    $grid_10_2 = '10_2';
    $grid_11_1 = '11_1';

    //three column
    $grid_1_10_1  = '1_10_1';
    $grid_2_8_2   = '2_8_2';
    $grid_3_6_3   = '3_6_3';
    $grid_4_4_4   = '4_4_4';
    $grid_5_2_5   = '5_2_5';
    $grid_1_1_10  = '1_1_10';
    $grid_10_1_1  = '10_1_1';
    $grid_1_2_9   = '1_2_9';
    $grid_9_2_1   = '9_2_1';
    $grid_2_2_8   = '2_2_8';
    $grid_8_2_2   = '8_2_2';
    $grid_3_3_6   = '3_3_6';
    $grid_6_3_3   = '6_3_3';

    //four column
    $grid_1_1_1_9 = '1_1_1_9';
    $grid_2_1_1_8 = '2_1_1_8';
    $grid_1_2_1_8 = '1_2_1_8';
    $grid_1_1_2_8 = '1_1_2_8';
    $grid_1_2_2_7 = '1_2_2_7';
    $grid_2_1_2_7 = '2_1_2_7';
    $grid_2_2_1_7 = '2_2_1_7';
    $grid_2_2_2_6 = '2_2_2_6';
    $grid_2_2_3_5 = '2_2_3_5';
    $grid_2_3_2_5 = '2_3_2_5';
    $grid_3_2_2_5 = '3_2_2_5';
    $grid_3_2_3_4 = '3_2_3_4';
    $grid_3_3_2_4 = '3_3_2_4';
    $grid_3_3_3_3 = '3_3_3_3';

    $grid_9_1_1_1 = '9_1_1_1';
    $grid_2_1_1_8 = '8_1_1_2';
    $grid_8_1_2_1 = '8_1_2_1';
    $grid_8_2_1_1 = '8_2_1_1';
    $grid_7_2_2_1 = '7_2_2_1';
    $grid_7_2_1_2 = '7_2_1_2';
    $grid_7_1_2_2 = '7_1_2_2';
    $grid_6_2_2_2 = '6_2_2_2';
    $grid_5_3_2_2 = '5_3_2_2';
    $grid_5_2_3_2 = '5_2_3_2';
    $grid_5_2_2_3 = '5_2_2_3';
    $grid_4_3_2_3 = '4_3_2_3';
    $grid_4_2_3_3 = '4_2_3_3';

}
else {
    echo '<div style="padding:15px;" class="bg-danger">Bitte installieren Sie <strong>mform</strong> und / oder <strong>mblock</strong>!</div>';
}