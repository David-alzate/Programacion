<?php
include('conexion.php');
$id = $_GET['cod'];
$result=mysqli_query($conexion,"select * from usuario where id=$id") or die("problemas en el select".mysqli_error($conexion));

while ($row = mysqli_fetch_array($result)){ 
       echo ""; 
       $nom=$row['nombre'];
} 
echo "Esta seguro desea elimininar el registro  ".$id. " con nombre ".$nom."";

?>
<!DOCTYPE html>
<html>
<head>
	<title></title>
</head>
<body>
<a href="confirmar.php?ced=<?php echo $_GET['cod'];?>">SI /</a>

<a href="mostrarusuario.php">NO</a>

</body>
</html>