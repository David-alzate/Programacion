<?php
 session_start();
  if (isset($_SESSION["nombre"])){
  //ingresa derecho
}else{
	header("location:index.html");
	exit();
}

 ?>

<!DOCTYPE html>
<html>
<head>
	<title>Pagina Principal</title>
</head>
<body>
	Bienvenido<BR>
	<?php echo $_SESSION["nombre"]." ";
	      echo $_SESSION['apellido']; ?>
	<table border="1" align="center">	
			<tr>
				<TD><a href="frmsoldados.php">Ingresar soldado</a></TD>	
			</tr>
			<tr>
				<TD><a href="mostrarsoldados.php">Mostrar soldados</a></TD>	
			</tr>
		
	
	
	</table>
	<a href="salir.php">Cerrar sesion</a>
</body>
</html>