<?php
include('conexion.php');
$ced=$_POST["cedula"];

//echo "$nombre_img";

mysqli_query($conexion,"update soldados set nombre='$_POST[nombre]' , apellido='$_POST[apellido]' ,cuartel='$_POST[cuartel]',cuerpo='$_POST[cuerpo]',servicios='$_POST[servicios]' where codigo='$ced'") or die("problemas en el select:".mysql_error($conexion));
   echo "El archivo fue modificado con exito";
   //header("location:")
?>
<!DOCTYPE html>
<html>
<head>
	<title></title>
</head>
<body>
<a href="mostrarsoldados.php">Soldados</a>
</body>
</html>
