<?php
$string = '';
for ($i = 0; $i < 4; $i++) {
    $string .= "Happy birthday ";
    if ($i != 2) {
        $string .= "to you!\n";
    } else {
        $string .= "dear %s!\n";
    }
}
print sprintf($string, 'name');
?>