<?php 
   include("conexion.php");
   session_start();
   $antigua=$_POST["antigua"];
   $nueva=$_POST["nueva"];
   $confirmar=$_POST["confirmar"];
   $cod=$_SESSION["codigo"];
   $regis=mysql_query($conexion,"select * from usuario where codigo=$cod") or die ("problemas en el select").mysqli_error($conexion));
  
   if (mysql_num_rows($regis)>0{
   	$fila=mysqli_fetch_row($regis);
   	$pass=$fila[3];
   	if ($pass==$antigua){
   	  echo "la contraseña antigua es ".$antigua;
   	  echo "la contraseña nueva es  ".$nueva;
   	  echo "la contraseña confirmada es  ".$confirmar;
  	}else{
  		echo "ahhhhhhh";
  	}
   }else{
   	echo "jajajaj";
   }
 ?>