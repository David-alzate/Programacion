<?php
	require_once('conexion.php');
$nombre_img=$_FILES['imagen']['name'];	
$tipo_img=$_FILES['imagen']['type'];	
$tam_img=$_FILES['imagen']['size'];	


  if($tam_img <=1000000)
  {

  	if($tipo_img=="image/jpg" || $tipo_img =="image/jpeg" || $tipo_img =="image/png" || $tipo_img =="image/gif")
  {
    $carpeta=$_SERVER['DOCUMENT_ROOT'].'/mascotas/imagenes/';

    move_uploaded_file($_FILES['imagen']['tmp_name'], $carpeta.$nombre_img);
    //echo "Se guardo la foto"
    mysqli_query($conexion,"insert into mascotas(codigo,nombre,fecha_nacimiento,foto) values ($_POST[codigo],'$_POST[nombre]','$_POST[fecha]','$nombre_img')") 
or die ("problemas en el select".mysqli_error($conexion));
         echo" el archivo fue cargado con exito";

    }else  
    	echo"tipo de imagen incorrecto";
    }else
    echo"el tamaño excede el limite de 1 mb";	         
?>