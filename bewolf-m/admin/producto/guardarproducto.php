<?php
	require_once("conexion.php");
	$codigo = $_POST['codigo'];
  $nombre = $_POST['nombre'];
  $descripcion = $_POST['descripcion'];
  $precio = $_POST['precio'];

  $nombre_img=$_FILES['imagen']['name'];
	$tipo_img=$_FILES['imagen']['type'];
    $tam_img=$_FILES['imagen']['size'];
    
    if ($tam_img<=1000000) {
    	 if ($tipo_img=="image/jpg" || $tipo_img=="image/jpeg" || $tipo_img=="image/png" || $tipo_img=="image/gif")
    	 {
    	 	 $carpeta=$_SERVER['DOCUMENT_ROOT'].'../bewolf-m/Menu/img/';

    	 	 move_uploaded_file($_FILES['imagen']['tmp_name'], $carpeta.$nombre_img);
    	 	 //echo "se guardo la foto";
    	 	mysqli_query($conexion,"insert into productos(codigo,nombre,descripcion,precio,imagen) values($codigo, '$nombre','$descripcion', '$precio','$nombre_img')") or die("Problemas en el insert".mysqli_error($conexion));
    	 	 header("location:./../admin.php");

         }else
          echo "Tipo de imagen incorrecto";
        }else 
          echo "El tamaño excede el limite de 1 MB";
?>