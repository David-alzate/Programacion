<?php 
 session_start();
  if (isset($_SESSION["nombre"])){
  //ingresa derecho
  }else{
      header("location:index.html");
      exit();
  }


 ?>
 
<?php 
  include("conexion.php");
  $registros=mysqli_query($conexion,"select codigo, marca, procesador, ram, discoduro, sistemaoperativo, tarjetagrafica from equipo") or die ("promelas en el select".mysqli_error($conexion));
 ?>
<!DOCTYPE html>
<html>
<head>
	<title></title>

</head>
<body>
   
<?php  
  echo"<table class='table table-success table-striped'>";
   echo"<tr>";
    echo"<td>codigo</td><td>Marca</td><td>Procesador</td><td>Ram</td><td>Disco Duro</td><td>Sistema Operativo</td></td><td>Tarjeta Grafica</td>Eliminar</td>";
   echo"</tr>";
   while ($reg=mysqli_fetch_array($registros)){
       echo"<tr>";
       echo"<td>".$reg['codigo']."</td>";
       echo"<td>".$reg['marca']."</td>";
       echo"<td>".$reg['procesador']."</td>";
       echo"<td>".$reg['ram']."</td>";
       echo"<td>".$reg['discoduro']."</td>";
       echo"<td>".$reg['sistemaoperativo']."</td>";
       echo"<td>".$reg['tarjetagrafica']."</td>";
       echo"<td> <a href='eliminar.php?cod=$reg[codigo]'>Eliminar</td>";
       echo"</tr>";
   }


  echo"</table>";

?>
</body>
</html>