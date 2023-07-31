<?php
 session_start();
  if (isset($_SESSION["nombre"])){
  //ingresa derecho
}else{
  header("location:index.html");
  exit();
}

 ?>
<!DOCTYPE html>
<html>
<head>
	<title>Ingresar soldado</title>
  <meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">

    <!-- Bootstrap CSS -->
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.0-beta3/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-eOJMYsd53ii+scO/bJGFsiCZc+5NDVN2yr8+0RDqr0Ql0h+rP48ckxlpbzKgwra6" crossorigin="anonymous">
</head>
<body>
<div class="container">
  <div class="col-3">
	<form action="guardarsoldado.php" method="post">
  	<div class="mb-3">
    	<label for="codigo" class="form-label">Código</label>
    	<input type="text" class="form-control" id="codigo" name="codigo" placeholder="Código">
    </div>
    <div class="mb-3">
    	<label for="nombre" class="form-label">Nombre</label>
    	<input type="text" class="form-control" id="nombre" name="nombre" placeholder="Nombre">
    </div>
    <div class="mb-3">
    	<label for="apellido" class="form-label">Apellido</label>
    	<input type="text" class="form-control" id="apellido" name="apellido" placeholder=" Apellido">
    </div>
    <div class="mb-3">
    	<label for="cuartel" class="form-label">Cuartel</label>
    	<input type="text" class="form-control" id="cuartel" name="cuartel" placeholder="Cuartel">
    </div>
    <div class="mb-3">
      <label for="cuerpo" class="form-label">Cuerpo</label>
    <select class="form-select" aria-label="Default select example" id="cuerpo" name="cuerpo">
	  <option selected>Seleccione un cuerpo</option>
	  <option value="Infateria">Infanteria</option>
	  <option value="Artilleria">Artilleria</option>
	  <option value="Armada">Armada</option>
	</select>
   </div>
   <div class="mb-3">
    <label for="servicio" class="form-label">Servicio</label>
    <select class="form-select" aria-label="Default select example" id="servicio" name="servicio">
	  <option selected>Seleccione un servicio</option>
	  <option value="Guardias">Guardias</option>
	  <option value="Instructores">Instructores</option>
	  <option value="Cuarteleros">Cuarteleros</option>
	  <option value="Rancheros">Rancheros</option>
	</select>
   </div>

  <button type="submit" class="btn btn-success">Submit</button>
</form>
</div>

</div>





<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.0.0-beta3/dist/js/bootstrap.bundle.min.js" integrity="sha384-JEW9xMcG8R+pH31jmWH6WWP0WintQrMb4s7ZOdauHnUtxwoG2vI5DkLtS3qm9Ekf" crossorigin="anonymous"></script>
<script src="https://cdn.jsdelivr.net/npm/@popperjs/core@2.9.1/dist/umd/popper.min.js" integrity="sha384-SR1sx49pcuLnqZUnnPwx6FCym0wLsk5JZuNx2bPPENzswTNFaQU1RDvt3wT4gWFG" crossorigin="anonymous"></script>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.0.0-beta3/dist/js/bootstrap.min.js" integrity="sha384-j0CNLUeiqtyaRmlzUHCPZ+Gy5fQu0dQ6eZ/xAww941Ai1SxSY+0EQqNXNE6DZiVc" crossorigin="anonymous"></script>
</body>
</html>