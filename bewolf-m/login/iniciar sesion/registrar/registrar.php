<?php
include ("conexion.php");
$nombre=$_POST["nombre"];
$apellido=$_POST["apellido"];
$correo=$_POST["correo"];
$contrasena=$_POST["contrasena"];
$id=$_POST["id"];
$telefono=$_POST["telefono"];
$id_cargo="2";
mysqli_query($conexion,"insert into usuario(nombre,apellido,correo,contrasena,id,telefono,id_cargo) values('$nombre','$apellido','$correo','$contrasena','$id','$telefono','$id_cargo')") or die ("problemas en el insert".mysqli_error($conexion));

 echo "<script>alert ('se registro su informacion con exito'); window.location.href='./../../../index.html';</script>";




?>