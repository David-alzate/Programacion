<?php 
  $cont=0;
  $positivos=0;
  $negativos=0;
  $cero=0;
  while ($cont<=10){
    $n1=rand(-10,10);
    if($n1>0){
     $positivos++;
    }elseif($n1<0){
     $negativos++;
    }else{
     $cero++;
      $cont++;
    }
    }
   echo " Los Positivos son ".$positivos;
   echo"<br>";  
   echo " Los negativos son ".$negativos;
   echo"<br>";  
   echo " Los cero ".$cero;
   echo"<br>";   
   

?>