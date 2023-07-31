<?php
include('conexion.php');
$id=$_GET['cod'];

$result=mysqli_query($conexion,"select * from usuario where id='$id'") or die("problemas en el select".mysqli_error($conexion));

?>
<!DOCTYPE html>
<html>
<head>
	<title>Modificar</title>
	<link rel="stylesheet" type="text/css" href="estilos.css">
	    
</head>
<body>
       
        <form method="post" action="actualizarusuario.php" >
		 <section class="form-register">
		 	<a href="./../mostrarusuario.php"> <img class="botons"  src="./../../../assets/atras.png" style="padding-right: 10px;padding-left: 10px;padding-top: 10px;width: 45px; float: right;padding-bottom: 10px;margin-bottom: 1px;margin-top: 10px;"><a>&nbsp;</a>
		 	<h1>Modificar Usuario</h1>
		
		<?php

			while ($row = mysqli_fetch_array($result)){

echo "<label class='controls-'>ID</label>";
				echo "<input class='controls' type='text' name='id' id='id' value='".$row['id']."'><br>";
echo "<label class='controls-'>Nombre</label>";
				echo "<input class='controls' type='text' name='nombre' id='nombre' value='".$row['nombre']."'><br>";
echo "<label class='controls-'>Apellido</label>";
				echo "<input  class='controls' type='text' name='apellido' id='apellido' value='".$row['apellido']."'><br>";
echo "<label class='controls-'>Correo</label>";
				echo "<input class='controls' type='text' name='correo' id='correo' value='".$row['correo']."'><br>";
echo "<label class='controls-'>Contraseña</label>";
				echo "<input class='controls' type='text' name='contrasena' id='contrasena' value='".$row['contrasena']."'><br>";
echo "<label class='controls-'>Telefono</label>";
				echo "<input class='controls' type='text' name='telefono' id='telefono' value='".$row['telefono']."'><br>";
echo "<label class='controls-'>ID Cargo</label>";
				echo "<input class='controls' type='text' name='id_cargo' id='id_cargo' value='".$row['id_cargo']."'><br>";
			
			}
		?>

	<input type='hidden' name='codigo' id='codigo' value='<?php echo $codigo;?>'>
	    <input class="botons"type="submit" value="Modificar">
</body>
</html>