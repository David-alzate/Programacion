<?php

 

  include("conexion.php");
  $registros=mysqli_query($conexion,"select codigo,nombre,descripcion,precio,imagen from productos") or die("problemas en el select".mysqli_error($conexion));
?>
<!DOCTYPE html>
<html>
<head>
  <title>Productos</title>
  <meta charset="utf-8">
  <a href="./../admin.php"> <img class="botons"  src="./../../assets/atras.png" style="padding-right: 10px;padding-left: 10px;padding-top: 10px;width: 45px; float: right;padding-bottom: 10px;margin-bottom: 1px;margin-top: 10px;"><a>&nbsp;</a>
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="icon" href="Hamburguesa.ico" />
  <link rel="stylesheet" type="text/css" href="estilosmostrarproducto.css">

   
</head>
<body>
  <div id="main-container">
  <?php
     echo "<table>";
     echo "<thead>";
      echo "<tr>";
      echo "<td>Codigo</td><td>Nombre</td><td>descripcion</td><td>precio</td><td>imagen</td><td>Eliminar</td><td>Modificar</td>";
      echo"</tr>";
      echo "</thead>";
      while ($reg=mysqli_fetch_array($registros)){
        echo "<tr>";
        echo "<td>".$reg['codigo']."</td>";
        echo "<td>".$reg['nombre']."</td>";
        echo "<td>".$reg['descripcion']."</td>";
        echo "<td>".$reg['precio']."</td>";
        echo "<td>".$reg['imagen']."<img src='/bewolf/Menu/img/'></td>";
        echo "<td> <a href='eliminarproducto.php?cod=$reg[codigo]'>Eliminar</td>";
        echo "<td> <a href='modificarproducto/modificarproducto.php?cod=$reg[codigo]'>Modificar</td>";
        echo "</tr>";

      }

     echo "</table>";
  ?>
</div>

</body>
</html>