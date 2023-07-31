<?php
include("conexion.php");
$id= $_POST["id"];

mysqli_query($conexion,"update usuario set id='$_POST[id]', nombre='$_POST[nombre]', apellido='$_POST[apellido]', correo='$_POST[correo]', contrasena='$_POST[contrasena]', telefono='$_POST[telefono]', id_cargo='$_POST[id_cargo]' where id='$id'") or die ("problemas en el select:".mysqli_error($conexion));
	echo "<script>alert ('se modifico con exito'); window.location.href='./../mostrarusuario.php';</script>";

?>
