<?php
include('conexion.php');
$id = $_GET['cod'];
$result=mysqli_query($conexion,"select * from soldados where codigo=$id") or die("problemas en el select".mysqli_error($conexion));

while ($row = mysqli_fetch_array($result)){ 
       echo ""; 
       $nom=$row['nombre'];
} 
echo "Esta seguro desea elimninar el registro  ".$id. " con nombre ".$nom."";

?>
<!DOCTYPE html>
<html>
<head>
	<title></title>
</head>
<body>
<a href="confirmaelimarsoldado.php?ced=<?php echo $_GET['cod'];?>">SI /</a>

<a href="mostrarsoldados.php">NO</a>

</body>
</html>