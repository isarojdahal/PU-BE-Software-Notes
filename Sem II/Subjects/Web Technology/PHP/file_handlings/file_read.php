<?php

$file_name = "demo.txt";

if (file_exists($file_name)) {
    echo "File exists..";

    $file = fopen($file_name, "r");
    $size = filesize($file_name);
    $content = fread($file, $size);
    echo "Content of file : $content";

    fclose($file);
} else echo "File Doesnot exist";
