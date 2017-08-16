<?php

// this modul input uses the mform addon
// this modul input uses the mblock addon

if(rex_addon::get('mform')->isAvailable() && rex_addon::get('mblock')->isAvailable()) {
    echo '<p>YAY!</p>';
}
else {
    echo '<p class="bg-danger">Bitte installieren Sie <strong>mform</strong> und / oder <strong>mblock</strong>!</p>';
}