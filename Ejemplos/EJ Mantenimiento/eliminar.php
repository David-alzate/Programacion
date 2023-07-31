<?php
include('conexion.php');
$id = $_GET['cod'];
$result=mysqli_query($conexion,"select * from equipo where codigo=$id") or die ("problemas en el select".mysqli_error($conexion));

while ($row = mysqli_fetch_array($result)){
	echo "";
	$nom=$row['marca'];
}
 echo"Esta seguro que desea eliminar el registro ".$id. " conn nombre ".$nom."";

 ?>

 <!DOCTYPE html>
 <html>
 <head>
 	<title></title>
 </head>
 <body>
  <a href="confirmareliminarequipo.php?ced=<?php echo $_GET['cod'];?>">Si /<a>

  <a href="mostrarequipo.php">NO</<a>
 </body>
 </html>