<?php
   session_start();
     if (isset($_SESSION["nombre"])){
     //ingresa derecho
 }else{
  header("location:index.html");
  exit();
}
?>


<!DOCTYPE >
<html lang="en">
<head>
   <meta charset="UTF-8">
   <meta name="viewport" content= "width=device-width, initial-scale=1.0 ">
   <meta http-equiv="X-UA-Compatible" content="ie=edge">
   <link rel="stylesheet" type="text/css" href="style.css">
    <link rel="icon" type="image/x-icon" href="pablo.ico" />
	<title>Resgistrarte</title>
</head>
<body>
	<form action="registraradmin.php"method="post">
  <section class="form-register">
  	<h1>Registrar Admin</h1>
   
    <input class="controls" type="int" name="id" id="id" placeholder="ingrese su id">
  	<input class="controls" type="text" name="nombre" id="nombre" placeholder="ingrese su nombre">
  	<input class="controls" type="text" name="apellido" id="apellido" placeholder="ingrese su apellido">
     <input class="controls" type="text" name="telefono" id="telefono" placeholder="ingrese su telefono">
  	<input class="controls" type="email" name="correo" id="correo" placeholder="ingrese su correo">
  	<input class="controls" type="password" name="contrasena" id="contrasena" placeholder="ingrese su contraseña">
  
  	<p>Estoy de acuerdo con <a href="">Terminos y condiciones</a></p>
  	<input class="botons"type="submit" value="Registrar">
  	<p><a href= "./../f2.html">¿Ya tengo cuenta?</a></p>
  </section>
</body>
</html>