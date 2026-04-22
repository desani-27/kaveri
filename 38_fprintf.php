<?php
$file=fopen("test.txt","w");
fprintf($file,"hello php");
fclose($file);
?>