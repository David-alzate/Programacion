<?php
include('conexion.php');
$id=$_GET['id'];

$result=mysqli_query($conexion,"select * from clientes where id='$id'") or die("problemas en el select".mysqli_error($conexion));

?>
<!DOCTYPE html>
<html>
<head>
	<title>Modificar</title>
	        <link rel="shortcut icon" href="jwings.jpg">
<meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
<link rel="stylesheet" href="css/bootstrap.css">
   <script src="js/jquery.min.js"></script>
           <link rel="shortcut icon" href="jwings.jpg">

<script src="js/bootstrap.js"></script>
<link href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.0-beta3/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-eOJMYsd53ii+scO/bJGFsiCZc+5NDVN2yr8+0RDqr0Ql0h+rP48ckxlpbzKgwra6" crossorigin="anonymous">
</head>
<body>
<h4 style="margin-left:570px">Modificar clientes</h4>

	<form method="post" action="actualizarclientes.php" style="margin-left:600px">
		
		<?php

			while ($row = mysqli_fetch_array($result)){

				echo "<input type='text' name='nombre' id='nombre' value='".$row['nombre']."'><br>";
				echo "<input type='text' name='apellido' id='apellido' value='".$row['apellido']."'><br>";
				echo "<input type='text' name='fechanac' id='fechanac' value='".$row['fechanac']."'><br>";
				echo "<input type='text' name='telefono' id='telefono' value='".$row['telefono']."'><br>";
				echo "<input type='text' name='email' id='email' value='".$row['email']."'><br>";
				echo "<input type='file' name='foto' id='foto' value='".$row['foto']."'><br>";
			}
		?>

	<input type='hidden' name='id' id='id' value='<?php echo $id;?>'>
<div><button class='btn btn-danger' type='submit'>MODIFICAR</button></div>	</form>
<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.0.0-beta3/dist/js/bootstrap.bundle.min.js" integrity="sha384-JEW9xMcG8R+pH31jmWH6WWP0WintQrMb4s7ZOdauHnUtxwoG2vI5DkLtS3qm9Ekf" crossorigin="anonymous"></script>
<script src="https://cdn.jsdelivr.net/npm/@popperjs/core@2.9.1/dist/umd/popper.min.js" integrity="sha384-SR1sx49pcuLnqZUnnPwx6FCym0wLsk5JZuNx2bPPENzswTNFaQU1RDvt3wT4gWFG" crossorigin="anonymous"></script> 
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.0.0-beta3/dist/js/bootstrap.min.js" integrity="sha384-j0CNLUeiqtyaRmlzUHCPZ+Gy5fQu0dQ6eZ/xAww941Ai1SxSY+0EQqNXNE6DZiVc" crossorigin="anonymous"></script>
</body>
</html>