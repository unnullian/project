<?php  

$link=mysqli_connect("192.168.0.13","root","root", "myDB" );  
if (!$link)  
{  
    echo "MySQL connect error : ";
    echo mysqli_connect_error();
    exit();  
}  
mysqli_set_charset($link,"utf8"); 



$sql="select * from multitap";

$result=mysqli_query($link,$sql);
$data = array();   
if($result){  
    
    while($row=mysqli_fetch_array($result)){
        array_push($data, 
            array('num'=>$row[0],
            'location'=>$row[1],
            'name1' => $row[2],
            'mA1' => $row[3],
            'flag1' => $row[4],
            'name2'=>$row[5],
            'mA2' => $row[6],
            'flag2'=>$row[]
        ));
    }header('Content-Type: application/json; charset=utf8');
                $json = json_encode(array("webnautes"=>$data), JSON_PRETTY_PRINT+JSON_UNESCAPED_UNICODE);
                echo $json;

    echo "<pre>"; print_r($data); echo '</pre>';

}  
else{  
header('Content-Type: application/json; charset=utf8');
                $json = json_encode(array("webnautes"=>$data), JSON_PRETTY_PRINT+JSON_UNESCAPED_UNICODE);
                echo $json;
    echo "SQL error : "; 
    echo mysqli_error($link);

} 


 
mysqli_close($link);  
   
?>