<?php 
   include("conexion.php");
   $user=$_POST["usuario"];
   $pass=$_POST["contrasena"];
   $admin=mysqli_query($conexion,"select * from equipo where codigo='$user' && pass='$pass'");
   if (mysqli_num_rows($admin)>0){
   	$fila=mysqli_fetch_row($admin);
   	$nombre=$fila[1];
   	$apellido=$fila[2];
   	session_start();
   	$_SESSION['nombre']="$nombre";
   	$_SESSION['apellido']="apellido";
   	header("location:admin.php");
   }else{
   	header("location:index.html");
   }

 ?>