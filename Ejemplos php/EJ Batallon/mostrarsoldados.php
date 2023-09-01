<?php

 session_start();
  if (isset($_SESSION["nombre"])){
  //ingresa derecho
}else{
	header("location:index.html");
	exit();
}

	include("conexion.php");
	$registros=mysqli_query($conexion,"select codigo, nombre, apellido, cuartel, cuerpo, servicios from soldados") or die("problemas en el select".mysqli_error($conexion));
?>
<!DOCTYPE html>
<html>
<head>
	<title></title>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">

    <!-- Bootstrap CSS -->
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.0-beta3/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-eOJMYsd53ii+scO/bJGFsiCZc+5NDVN2yr8+0RDqr0Ql0h+rP48ckxlpbzKgwra6" crossorigin="anonymous">
</head>
<body>
	<div class="container">
	<?php
	   echo "<table class='table table-success table-striped'>";
	   	echo "<tr>";
	   		echo "<td>Codigo</td><td>Nombre</td><td>Apellido</td><td>Cuartel</td><td>Cuerpo</td><td>Servicios</td><td>Eliminar</td><td>Modificar</td>";
	   	echo"</tr>";
	   	while ($reg=mysqli_fetch_array($registros)){
	   		echo "<tr>";
	   		echo "<td>".$reg['codigo']."</td>";
	   		echo "<td>".$reg['nombre']."</td>";
	   		echo "<td>".$reg['apellido']."</td>";
	   		echo "<td>".$reg['cuartel']."</td>";
	   		echo "<td>".$reg['cuerpo']."</td>";
	   		echo "<td>".$reg['servicios']."</td>";
	   		echo "<td> <a href='eliminar.php?cod=$reg[codigo]'>Eliminar</td>";
	   		echo "<td> <a href='modificar.php?doc=$reg[codigo]'>Modificar</td>";
	   		echo "</tr>";

	   	}

	   echo "</table>";
	?>
</div>
<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.0.0-beta3/dist/js/bootstrap.bundle.min.js" integrity="sha384-JEW9xMcG8R+pH31jmWH6WWP0WintQrMb4s7ZOdauHnUtxwoG2vI5DkLtS3qm9Ekf" crossorigin="anonymous"></script>
<script src="https://cdn.jsdelivr.net/npm/@popperjs/core@2.9.1/dist/umd/popper.min.js" integrity="sha384-SR1sx49pcuLnqZUnnPwx6FCym0wLsk5JZuNx2bPPENzswTNFaQU1RDvt3wT4gWFG" crossorigin="anonymous"></script>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.0.0-beta3/dist/js/bootstrap.min.js" integrity="sha384-j0CNLUeiqtyaRmlzUHCPZ+Gy5fQu0dQ6eZ/xAww941Ai1SxSY+0EQqNXNE6DZiVc" crossorigin="anonymous"></script>
</body>
</html>