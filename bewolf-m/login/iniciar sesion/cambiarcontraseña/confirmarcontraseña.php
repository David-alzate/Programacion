<?php
include("conexion.php");

   session_start();
	$antigua=$_POST["antigua"];
	$nueva=$_POST["nueva"];
	$confirmar=$_POST["confirmar"];
	$ide= $_POST['id'];


 $registros=mysqli_query($conexion,"select * from usuario where id=$ide") or die ("problemas en el select".mysqli_error($conexion));

   if (mysqli_num_rows($registros)>0){
	$fila=mysqli_fetch_row($registros);
	$contrasena=$fila[3];
      if($contrasena==$antigua){
	   if ($nueva==$confirmar){

            $registros=mysqli_query($conexion,"update  usuario set contrasena='$nueva'  where id='$ide'") or die ("problemas al actualizar".mysqli_error($conexion));
	   	   
	   	    header("location:redireccionar.html");
	    	}else{
	    		header("location:./../../../index.html");
	        }
	
	
}else{
	header("location:cambiarcontraseña.html");
}

}





?>