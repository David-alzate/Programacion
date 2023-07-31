<?php
include("conexion.php");
$id= $_POST["id"];

mysqli_query($conexion,"update clientes set nombre='$_POST[nombre]', apellido='$_POST[apellido]', fechanac='$_POST[fechanac]', telefono='$_POST[telefono]', email='$_POST[email]' where id='$id'") or die ("problemas en el select:".mysqli_error($conexion));
	echo "<script>alert ('se modifico con exito'); window.location.href='mostrarclientes.php';</script>";

?>
