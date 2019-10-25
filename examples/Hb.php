<?php
  
//Function binaryToString by inanzzz http://www.inanzzz.com/index.php/post/swf8/converting-string-to-binary-and-binary-to-string-with-php
     
function binaryToString($binary)
    {
        $binaries = explode(' ', $binary);
     
        $string = null;
        foreach ($binaries as $binary) {
            $string .= pack('H*', dechex(bindec($binary)));
        }
     
        return $string;    
    }


    echo 'BINARY: '.$binary = "1001000 1100001 1110000 1110000 1111001 100000 1000010 1101001 1110010 1110100 1101000 1100100 1100001 1111001 100001".PHP_EOL;
    echo 'STRING: '.binaryToString($binary).PHP_EOL;
