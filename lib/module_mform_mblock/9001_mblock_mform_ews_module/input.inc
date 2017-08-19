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

    $mform->addFieldset('Grid Layout',array('class'=> 'grid_layout'));
    //$mform->addHeadline('Grid Layout', array('class'=>'text-center'));
    //variable grid_layout
    $grid_layout = [
        //one column
        '12'      => '<i class="grid_12"></i>',

        //two column
        '12_1'    => '<i class="grid_12_1"></i>',
        '1_11'    => '<i class="grid_1_11"></i>',
        '2_10'    => '<i class="grid_2_10"></i>',
        '3_9'     => '<i class="grid_3_9"></i>',
        '4_8'     => '<i class="grid_4_8"></i>',
        '5_7'     => '<i class="grid_5_7"></i>',
        '6_6'     => '<i class="grid_6_6"></i>',
        '7_5'     => '<i class="grid_7_5"></i>',
        '8_4'     => '<i class="grid_8_4"></i>',
        '9_3'     => '<i class="grid_9_3"></i>',
        '10_2'    => '<i class="grid_10_2"></i>',
        '11_1'    => '<i class="grid_11_1"></i>',

        //three column
        '1_10_1'  => '<i class="grid_1_10_1"></i>',
        '2_8_2'   => '<i class="grid_2_8_2"></i>',
        '3_6_3'   => '<i class="grid_3_6_3"></i>',
        '4_4_4'   => '<i class="grid_4_4_4"></i>',
        '5_2_5'   => '<i class="grid_5_2_5"></i>',
        '1_1_10'  => '<i class="grid_1_1_10"></i>',
        '10_1_1'  => '<i class="grid_10_1_1"></i>',
        '1_2_9'   => '<i class="grid_1_2_9"></i>',
        '9_2_1'   => '<i class="grid_9_2_1"></i>',
        '2_2_8'   => '<i class="grid_2_2_8"></i>',
        '8_2_2'   => '<i class="grid_8_2_2"></i>',
        '3_3_6'   => '<i class="grid_3_3_6"></i>',
        '6_3_3'   => '<i class="grid_6_3_3"></i>',

        //four column
        '1_1_1_9' => '<i class="grid_1_1_1_9"></i>',
        '2_1_1_8' => '<i class="grid_2_1_1_8"></i>',
        '1_2_1_8' => '<i class="grid_1_2_1_8"></i>',
        '1_1_2_8' => '<i class="grid_1_1_2_8"></i>',
        '1_2_2_7' => '<i class="grid_1_2_2_7"></i>',
        '2_1_2_7' => '<i class="grid_2_1_2_7"></i>',
        '2_2_1_7' => '<i class="grid_2_2_1_7"></i>',
        '2_2_2_6' => '<i class="grid_2_2_2_6"></i>',
        '2_2_3_5' => '<i class="grid_2_2_3_5"></i>',
        '2_3_2_5' => '<i class="grid_2_3_2_5"></i>',
        '3_2_2_5' => '<i class="grid_3_2_2_5"></i>',
        '3_2_3_4' => '<i class="grid_3_2_3_4"></i>',
        '3_3_2_4' => '<i class="grid_3_3_2_4"></i>',
        '3_3_3_3' => '<i class="grid_3_3_3_3"></i>',

        '9_1_1_1' => '<i class="grid_9_1_1_1"></i>',
        '8_1_1_2' => '<i class="grid_8_1_1_2"></i>',
        '8_1_2_1' => '<i class="grid_8_1_2_1"></i>',
        '8_2_1_1' => '<i class="grid_8_2_1_1"></i>',
        '7_2_2_1' => '<i class="grid_7_2_2_1"></i>',
        '7_2_1_2' => '<i class="grid_7_2_1_2"></i>',
        '7_1_2_2' => '<i class="grid_7_1_2_2"></i>',
        '6_2_2_2' => '<i class="grid_6_2_2_2"></i>',
        '5_3_2_2' => '<i class="grid_5_3_2_2"></i>',
        '5_2_3_2' => '<i class="grid_5_2_3_2"></i>',
        '5_2_2_3' => '<i class="grid_5_2_2_3"></i>',
        '4_3_2_3' => '<i class="grid_4_3_2_3"></i>',
        '4_2_3_3' => '<i class="grid_4_2_3_3"></i>'
    ];

    $mform->addRadioField("$id.0.grid_layout",$grid_layout,array('label'=>'Grid Layout','class'=>'grid_layout'));

    //$mform->addHtml('</div>');


    echo $mform->show();

}
else {
    echo '<div style="padding:15px;" class="bg-danger">Bitte installieren Sie <strong>mform</strong> und / oder <strong>mblock</strong>!</div>';
}

if(rex::isBackend()) { ?>
    <style>
        .grid_layout .form-group {
            max-width: 680px;
            margin: 0 auto;
        }
        .grid_layout legend {
            text-align: center;
            border-bottom: 0 none;
        }
        .grid_layout .control-label,
        input[type="radio"]
        {
            display: none;
        }
        label input[type="radio"]:checked ~ i[class^='grid_'],
        label input[type="radio"]:checked ~ i[class*='grid_']
        {
            background-color: #3bb594;
        }
        .grid_layout .col-sm-10 {
            width: 100%;
        }
        .radio {
            float:left;
        }
        .radio:nth-child(even) {
            float:right;
        }
        .radio label {
            padding-left: 0;
        }
        i[class^='grid_'], i[class*='grid_'] {
            display:block;
            width: 320px;
            height: 60px;
            padding: 10px 20px;
            background-color: #FFF;
            background-size: 280px 40px;
            background-position: 20px 10px;
            background-repeat: no-repeat;
        }
        .grid_12 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_12.png');
        }
        .grid_12_1 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_12_1.png');
        }

        .grid_1_11 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_1_11.png');
        }
        .grid_2_10 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_2_10.png');
        }
        .grid_3_9 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_3_9.png');
        }
        .grid_4_8 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_4_8.png');
        }
        .grid_5_7 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_5_7.png');
        }
        .grid_6_6 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_6_6.png');
        }
        .grid_7_5 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_7_5.png');
        }
        .grid_8_4 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_8_4.png');
        }
        .grid_9_3 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_9_3.png');
        }
        .grid_10_2 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_10_2.png');
        }
        .grid_11_1 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_11_1.png');
        }
        .grid_1_10_1 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_1_10_1.png');
        }
        .grid_2_8_2 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_2_8_2.png');
        }
        .grid_3_6_3 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_3_6_3.png');
        }
        .grid_4_4_4 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_4_4_4.png');
        }
        .grid_5_2_5 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_5_2_5.png');
        }
        .grid_1_1_10 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_1_1_10.png');
        }
        .grid_10_1_1 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_10_1_1.png');
        }
        .grid_1_2_9 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_1_2_9.png');
        }
        .grid_9_2_1 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_9_2_1.png');
        }
        .grid_2_2_8 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_2_2_8.png');
        }
        .grid_8_2_2 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_8_2_2.png');
        }
        .grid_3_3_6 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_3_3_6.png');
        }
        .grid_6_3_3 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_6_3_3.png');
        }
        .grid_1_1_1_9 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_1_1_1_9.png');
        }
        .grid_2_1_1_8 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_2_1_1_8.png');
        }
        .grid_1_2_1_8 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_1_2_1_8.png');
        }
        .grid_1_1_2_8 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_1_1_2_8.png');
        }
        .grid_1_2_2_7 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_1_2_2_7.png');
        }
        .grid_2_1_2_7 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_2_1_2_7.png');
        }
        .grid_2_2_1_7 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_2_2_1_7.png');
        }
        .grid_2_2_2_6 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_2_2_2_6.png');
        }
        .grid_2_2_3_5 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_2_2_3_5.png');
        }
        .grid_2_3_2_5 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_2_3_2_5.png');
        }
        .grid_3_2_2_5 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_3_2_2_5.png');
        }
        .grid_3_2_3_4 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_3_2_3_4.png');
        }
        .grid_3_3_2_4 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_3_3_2_4.png');
        }
        .grid_3_3_3_3 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_3_3_3_3.png');
        }
        .grid_9_1_1_1 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_9_1_1_1.png');
        }
        .grid_8_1_1_2 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_8_1_1_2.png');
        }
        .grid_8_1_2_1 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_8_1_2_1.png');
        }
        .grid_8_2_1_1 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_8_2_1_1.png');
        }
        .grid_7_2_2_1 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_7_2_2_1.png');
        }
        .grid_7_2_1_2 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_7_2_1_2.png');
        }
        .grid_7_1_2_2 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_7_1_2_2.png');
        }
        .grid_6_2_2_2 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_6_2_2_2.png');
        }
        .grid_5_3_2_2 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_5_3_2_2.png');
        }
        .grid_5_2_3_2 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_5_2_3_2.png');
        }
        .grid_5_2_2_3 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_5_2_2_3.png');
        }
        .grid_4_3_2_3 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_4_3_2_3.png');
        }
        .grid_4_2_3_3 {
            background-image: url('../assets/9001_mblock_mform_ews_module_assets/img/grid_-assets/grid_4_2_3_3.png');
        }
    </style>

<? }