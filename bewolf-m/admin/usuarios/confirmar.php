<?php
include('conexion.php');
$id=$_GET['ced'];

mysqli_query($conexion,"DELETE from usuario where id=$id") or die("problemas en el select".mysqli_error($conexion));
	echo("Se elimino el registro");

 
?>