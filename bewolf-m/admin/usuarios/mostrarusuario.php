<?php

 

  include("conexion.php");
  $registros=mysqli_query($conexion,"select id,nombre,apellido,correo,contrasena,telefono,id_cargo from usuario") or die("problemas en el select".mysqli_error($conexion));
?>
<!DOCTYPE html>
<html>
<head>
  <title>Usuarios</title>
  <meta charset="utf-8">
   <a href="./../admin.php"> <img class="botons"  src="./../../assets/atras.png" style="padding-right: 10px;padding-left: 10px;padding-top: 10px;width: 45px; float: right;padding-bottom: 10px;margin-bottom: 1px;margin-top: 10px;"><a>&nbsp;</a>
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" type="text/css" href="estilosmostrarusuario.css">
  <link rel="icon" href="hamburguesa.ico" />

   
</head>
<body>
  <div  id="main-container">
  <?php
     echo "<table>";
     echo "<thead>";
      echo "<tr>";
        echo "<td>Codigo</td><td>Nombre</td><td>apellido</td><td>correo</td><td>contrasena</td><td>telefono</td><td>ID Cargo</td><td>Eliminar</td><td>Modificar</td>";
      echo"</tr>";
      echo "</thead>";
      while ($reg=mysqli_fetch_array($registros)){
        echo "<tr>";
        echo "<td>".$reg['id']."</td>";
        echo "<td>".$reg['nombre']."</td>";
        echo "<td>".$reg['apellido']."</td>";
        echo "<td>".$reg['correo']."</td>";
        echo "<td>".$reg['contrasena']."</td>";
        echo "<td>".$reg['telefono']."</td>";
        echo "<td>".$reg['id_cargo']."</td>";
        echo "<td> <a href='eliminarusuario.php?cod=$reg[id]'>Eliminar</td>";
        echo "<td> <a href='modificarusuario/modificarusuario.php?cod=$reg[id]'>Modificar</td>";
        echo "</tr>";

      }

     echo "</table>";
  ?>
</div>

</body>
</html>