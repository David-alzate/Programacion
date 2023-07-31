<?php
	include("conexion.php");
	$codigo=$_POST["codigo"];
	$nombre=$_POST["nombre"];
	$apellido=$_POST["apellido"];
	$cuartel=$_POST["cuartel"];
	$cuerpo=$_POST["cuerpo"];
	$servicio=$_POST["servicio"];
	
	mysqli_query($conexion,"insert into soldados(codigo,nombre,apellido,cuartel,cuerpo,servicios) values($codigo, '$nombre', '$apellido','$cuartel', '$cuerpo', '$servicio')") or die("Problemas en el insert".mysqli_error($conexion));
	echo "Se guardaron los datos";

?>