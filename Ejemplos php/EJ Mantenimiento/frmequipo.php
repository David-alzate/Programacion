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
  <title>Ingresar Equipo</title>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">

    <!-- Bootstrap CSS -->
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.0-beta3/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-eOJMYsd53ii+scO/bJGFsiCZc+5NDVN2yr8+0RDqr0Ql0h+rP48ckxlpbzKgwra6" crossorigin="anonymous">
</head>
<body>

<div class="container">
  <div class="col-3">
  <form action="guardarequipo.php" method="post">
  
  <div class="mb-3">
    <label for="codigo" class="form-label">Código</label>
     <input type="text" class="form-control" id="codigo" name="codigo" placeholder="Código">
</div>
 <div class="mb-3">
    <label for="marca" class="form-label">Marca</label>
    <select class="form-select" aria-label="Default select example" id="marca" name="marca">
  <option selected>Seleccione una marca</option>
  <option value="Acer">Acer</option>
  <option value="Hp">Hp</option>
  <option value="Lenovo">Lenovo</option>
  
</div>
</select>
 <div class="mb-3">
    <label for="procesador" class="form-label">Procesador</label>
     <select class="form-select" aria-label="Default select example" id="procesador" name="procesador">
  <option selected>Seleccione un procesador</option>
  <option value="AMD">AMD</option>
  <option value="INTEL">INTEL</option>
</div>
</select>
 <div class="mb-3">
    <label for="ram" class="form-label">Ram</label>
     <select class="form-select" aria-label="Default select example" id="ram" name="ram">
  <option selected>Seleccione una Ram</option>
  <option value="4 GB">4 GB</option>
  <option value="8 GB">8 GB</option>
  <option value="16 GB">16 GB</option>
  <option value="32 GB">32 GB</option>
  <option value="64 GB">64 GB</option>
 </select>
</div>
<div class="mb-3">
 <label for="discoduro" class="form-label">Disco Duro</label>
<select class="form-select" aria-label="Default select example" id="discoduro" name="discoduro">
  <option selected>Seleccione un Disco Duro</option>
  <option value="128 GB">128 GB</option>
  <option value="256 GB">256 GB</option>
  <option value="512 GB">512 GB</option>
   <option value="1 TB">1 TB</option>
  <option value="2 TB">2 TB</option>
</select>
   </div>
   <div class="mb-3">
 <label for="sistemaoperativo" class="form-label">Sistema Operativo</label>
<select class="form-select" aria-label="Default select example" id="sistemaoperativo" name="sistemaoperativo">
  <option selected>Seleccione un Sistema Operativo</option>
  <option value="WIN 10">WIN 10</option>
  <option value="LINUX">LINUX</option>
  <option value="IOS">IOS</option>
  </select>
   </div>
    <div class="mb-3">
 <label for="tarjetagrafica" class="form-label">Tarjeta Grafica</label>
<select class="form-select" aria-label="Default select example" id="tarjetagrafica" name="tarjetagrafica">
  <option selected>Seleccione una Tarjeta Grafica</option>
  <option value="2070 SUPER">GIGABYTE GEFORCE RTX 2070 SUPER</option>
  <option value="GTX 1660">GIGABYTE GEFORCE GTX 1660</option>
  <option value="2080 SUPER">GIGABYTE GEFORCE RTX 2080 SUPER</option>
  <option value="RTX 3080">Nvidia Geforce RTX 3080</option>
  <option value="RX 570">MSI Radeon RX 570 Armor</option>

  </select>
   </div>



  <button type="submit" class="btn btn-success">Enviar</button>
</form>
</div>
</div>






<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.0.0-beta3/dist/js/bootstrap.bundle.min.js" integrity="sha384-JEW9xMcG8R+pH31jmWH6WWP0WintQrMb4s7ZOdauHnUtxwoG2vI5DkLtS3qm9Ekf" crossorigin="anonymous"></script>
<script src="https://cdn.jsdelivr.net/npm/@popperjs/core@2.9.1/dist/umd/popper.min.js" integrity="sha384-SR1sx49pcuLnqZUnnPwx6FCym0wLsk5JZuNx2bPPENzswTNFaQU1RDvt3wT4gWFG" crossorigin="anonymous"></script>
<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.0.0-beta3/dist/js/bootstrap.min.js" integrity="sha384-j0CNLUeiqtyaRmlzUHCPZ+Gy5fQu0dQ6eZ/xAww941Ai1SxSY+0EQqNXNE6DZiVc" crossorigin="anonymous"></script>
</body>
</html>