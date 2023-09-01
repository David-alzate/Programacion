<?php
include('conexion.php');
$id=$_GET['doc'];
//echo="$id";
$result=mysqli_query($conexion,"select * from soldados where codigo='$id'") or die ("problemas en el select".mysqli_error($conexion));
?>
<!DOCTYPE html>
<html>
<head>
	<title>Modificar</title>
</head>
<body>

<form method="post" action="actualizarsold.php">

<?php
  while ($row = mysqli_fetch_array($result)){
   
   echo "<input type='text' name='nombre' id='nombre' value='".$row['nombre']."'><br>";
   echo "<input type='text' name='apellido' id='apellido' value='".$row['apellido']."'><br>";
   echo "<input type='text' name='cuartel' id='cuartel' value='".$row['cuartel']."'><br>";
   echo "<input type='text' name='cuerpo' id='cuerpo' value='".$row['cuerpo']."'><br><br>";
   echo "<input type='text' name='servicios' id='servicios' value='".$row['servicios']."'><br>";
  }
?>
  <input type="hidden" name='cedula' id='cedula' value='<?php echo $id;?>'>

  <input type="submit" value="actualizar">
</form>
</body>
</html>

















</html>
