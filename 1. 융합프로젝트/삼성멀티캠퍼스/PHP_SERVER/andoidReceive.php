<?php

$con = mysqli_connect("192.168.0.13","root","root","myDB");

if (!$con)


  {

  die('Could not connect: ' . mysql_error());

  }
$flag = $_REQUEST[flag2];
$sql = "update multitap set flag2=$flag where num = 1";


if (!mysqli_query($con, $sql))


  {

  die('Error: ' . mysql_error());

  }

echo "1 record added";



mysqli_close($con);

?>