<?php 
  include("conexion.php");
  $codigo=$_POST["codigo"];
  $marca=$_POST["marca"];
  $procesador=$_POST["procesador"];
  $ram=$_POST["ram"];
  $discoduro=$_POST["discoduro"];
  $sistemaoperativo=$_POST["sistemaoperativo"];
  $tarjetagrafica=$_POST["tarjetagrafica"];

  mysqli_query($conexion,"insert into equipo(codigo,marca,procesador,ram,discoduro,sistemaoperativo,tarjetagrafica) values($codigo,'$marca','$procesador','$ram','$discoduro','$sistemaoperativo','$tarjetagrafica')") or die ("problemas en el insert".mysqli_error($conexion));

 echo "se guardaron los datos";







?>