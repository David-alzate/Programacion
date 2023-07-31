<?php
   $usuario=$_POST['id'];
   $contrasena=$_POST['contrasena'];
   session_start();
   $_SESSION['usuario']=$usuario;

   $conexion=mysqli_connect("localhost","root","","bewolf") ;

  $consulta= "SELECT * FROM usuario where id='$usuario' and contrasena='$contrasena'";
  $resultado=mysqli_query($conexion,$consulta);

  $filas=mysqli_fetch_array($resultado);
  if($filas['id_cargo']==1){//administrador
        echo "<script>alert ('se logeo  con exito'); window.location.href='./../../admin/admin.php';</script>";
  }else
  if($filas['id_cargo']==2){//cliente
    echo "<script>alert ('se logeo su usuario con exito'); window.location.href='./../../index.html';</script>";

  }

  else{
    
   
  }

mysqli_free_result($resultado);
mysqli_close($conexion);



