<?php
include('conexion.php');
$codigo=$_GET['cod'];

$result=mysqli_query($conexion,"select * from productos where codigo='$codigo'") or die("problemas en el select".mysqli_error($conexion));

?>
<!DOCTYPE html>
<html>
<head>
	<title>Modificar</title>

	<link rel="stylesheet" type="text/css" href="estilos.css">
	<link rel="icon" href="Hamburguesa.ico" />
</head>
<body>


	<form method="post" action="actualizarproducto.php" >

		 <section class="form-register">
		 	<a href="./../mostrarproductos.php"> <img class="botons"  src="./../../../assets/atras.png" style="padding-right: 10px;padding-left: 10px;padding-top: 10px;width: 45px; float: right;padding-bottom: 10px;margin-bottom: 1px;margin-top: 10px;"><a>&nbsp;</a>
		 	<h1>Modificar Productos</h1>

		<?php

			while ($row = mysqli_fetch_array($result)){

            echo " <label class='controls-'>Codigo</label>";
				echo "<input class='controls' type='int' name='codigo' id='codigo' value='".$row['codigo']."'><br>";
			echo "<label class='controls-'>Nombre</label>";
				echo "<input class='controls' type='text' name='nombre' id='nombre' value='".$row['nombre']."'><br>";
			echo "<label class='controls-'>Descripcion</label>";
				echo "<input class='controls' type='text' name='descripcion' id='descripcion' value='".$row['descripcion']."'><br>";
			echo "<label class='controls-'>Precio</label>";
				echo "<input class='controls' type='text' name='precio' id='precio' value='".$row['precio']."'><br>";
		
			}
		?>

	<input type='hidden' name='codigo' id='codigo' value='<?php echo $codigo;?>'>
	    <input class="botons"type="submit" value="Modificar">
</section>
</body>
</html>