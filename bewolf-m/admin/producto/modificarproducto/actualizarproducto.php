<?php
include("conexion.php");
$codigo= $_POST["codigo"];

mysqli_query($conexion,"update productos set codigo='$_POST[codigo]', nombre='$_POST[nombre]', descripcion='$_POST[descripcion]', precio='$_POST[precio]' where codigo='$codigo'") or die ("problemas en el select:".mysqli_error($conexion));
	echo "<script>alert ('se modifico con exito'); window.location.href='./../mostrarproductos.php';</script>";

?>
