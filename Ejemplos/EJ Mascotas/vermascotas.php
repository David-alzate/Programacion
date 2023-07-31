<?php
     include('conexion.php');


  $result=mysqli_query($conexion,"select * from mascotas order by fecha_nacimiento DESC") or die ("problemas en el select".mysql_error($conexion));
  echo"<table border ='1' width='80%' aling='center'> \n";
  echo"<tr><td>codigo</td><td>Nombre</td><td>Fecha nacimiento</td><td>Foto</td><td>Eliminar</td><td>Modificar</td></tr> \n";
 
  while ($row = mysqli_fetch_array($result)){
  	echo "<tr><td>".$row['codigo']."</td><td>".$row['nombre']."</td><td>".$row['fecha_nacimiento']."
  	</td><td><img width='20%' src=/mascotas/imagenes/".$row['foto']."></td><td><a href='eliminarmascotas.php?cod=$row[codigo]'>Eliminar</a></td><td><a href='modificar.php?code=$row[codigo]'>Modificar</a></td></tr> \n";
  
  }
  echo "</table> \n";
  echo "<table aling='center'>";
  echo "<tr><td>";
  echo "</td></tr><table>";
?>