<?php

   

 include("conexion.php");
    $registros=mysqli_query($conexion,"select id,nombre,apellido,correo,telefono from usuario") or die ("problemas en el select".mysqli_error($conexion));
 ?>
<!DOCTYPE html>
<html>
<head>
  <title></title>
</head>
<body>
   bienvenido<br>
     <?php echo $_SESSION["nombre"];?>
     <br>
   <?php
     echo"<table border='1' align='center'>";
     echo"<tr>";
       echo "<td>codigo</td><td>nombre</td><td>apellido</td><td>correo</td><td>telefono</td>";

     echo"</tr>";
while($reg=mysqli_fetch_array($registros)){ 
      echo "<tr>";
      echo "<td>".$reg['id']."</td>";
      echo "<td>".$reg['nombre']."</td>";
      echo "<td>".$reg['apellido']."</td>";
      echo "<td>".$reg['correo']."</td>";
      echo "<td>".$reg['telefono']."</td>";
      
      echo "</tr>";
}


     echo"</table>";
   
   ?>
</body>
</html>