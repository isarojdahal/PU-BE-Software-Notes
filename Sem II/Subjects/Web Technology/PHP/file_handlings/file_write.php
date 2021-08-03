<?php

$filename = "demo.txt";

if (file_exists($filename)) {

    $file = fopen($filename, "w");
    $content = "Hello";
    fwrite($file, $content);

    fclose($file);
    echo "File Written";
} else echo "File doesnot exists";
