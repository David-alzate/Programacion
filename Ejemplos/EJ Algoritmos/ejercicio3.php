<?php
 $cont=1;
 while($cont<=10){
 	$n=rand(-5,5);
 	if ($n<0){
 		echo $n." EL valor absoluto es ".$n*-1;
 	}elseif($n>0){
 		echo $n." El valor absoluto es ".$n;
 	}else{
 		echo " el numero es ".$n;
 	}
     echo "<br>";
   $cont++;
 }
?>