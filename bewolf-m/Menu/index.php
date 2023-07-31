<?php
 include("conexion.php");
    $registros=mysqli_query($conexion,"select * from productos") or die ("problemas en el select".mysqli_error($conexion));
 ?>

<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport"
        content="width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0">
    <link rel="stylesheet" href="css/bootstrap.min.css">
    <script src="js/popper.min.js"></script>
    <link rel="stylesheet" href="https://use.fontawesome.com/releases/v5.6.3/css/all.css" integrity="sha384-UHRtZLI+pbxtHCWp1t77Bi1L4ZtiqrqD80Kn4Z8NTSRyMA2Fd33n5dQ8lWUE00s/" crossorigin="anonymous">
    
    <link rel="stylesheet" href="css/sweetalert2.min.css">
<link rel="icon" type="image/x-icon" href="img/logo.png" />

    <title>Pedidos-Burguer Town</title>
</head>

<body style="background-color: #17181b;">

    <header style="z-index: 100;">
        <div  class="container">
            <div class="row align-items-stretch justify-content-between">
                <nav style="background-color: " class="navbar navbar-expand-md navbar-dark fixed-top bg-dark">
                    <a class="navbar-brand" href="#page-top"><h1 style="font-size: 45px"><img src="logo.png" alt style="padding-right: 10px;padding-left: 90px">Burger Town</h1>


                               <a href="./../index.html"> <img class="botons"  src="atras.png" style="padding-right: 10px;padding-left: 10px;padding-top: 10px;width: 45px; float: right;padding-bottom: 10px;margin-bottom: 1px;margin-top: 10px;"><a>&nbsp;</a>




                    <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarCollapse"
                        aria-controls="navbarCollapse" aria-expanded="false" aria-label="Toggle navigation">
                        <span class="navbar-toggler-icon"></span>
                    </button>
                    <div  class="collapse navbar-collapse" id="navbarCollapse">
                        <ul  class="navbar-nav mr-auto">
                            <li style="float: right;"class="nav-item dropdown">
                        <img  src="img/cart.png" class="nav-link dropdown-toggle img-fluid" height="70px"
                                    width="70px" href="#" id="dropdown01" data-toggle="dropdown" aria-haspopup="true"
                                    aria-expanded="false"></img>
                                <div id="carrito" class="dropdown-menu" aria-labelledby="navbarCollapse">
                                    <table id="lista-carrito" class="table">
                                        <thead>
                                            <tr>
                                                <th>Imagen</th>
                                                <th>Nombre</th>
                                                <th>Precio</th>
                                                <th></th>
                                            </tr>
                                        </thead>
                                        <tbody></tbody>
                                    </table>

                                    <a href="#" id="vaciar-carrito" class="btn btn-primary btn-block">Vaciar Carrito</a>
                                    <a href="#" id="procesar-pedido" class="btn btn-danger btn-block">Procesar
                                        Compra</a>
                                </div>
                            </li>
                        </ul>
                    </div>
                </nav>
            </div>
        </div>
    </header>
 
    <main class="row row-cols-sm-1 row-cols-md-2 row-cols-lg-3 row-cols-xl-4">
       
        <div class="pricing-header px-3 py-3 pt-md-5 pb-md-4 my-4 mx-auto text-center">
           <h1 style="font-size:40px;color:white;text-align: left;margin-top: 20px" class="display-4 mt-4"><b>Lista de Productos</b></h1>
           
        </div>
 

        <div class="container" id="lista-productos">
            
            <div class="card-deck mb-3 text-center">
              
                <?php
      while($reg=mysqli_fetch_array($registros)){ 
                echo '<div class="card mb-4 shadow-sm">';
                    echo '<div style="background-color: #272429;border-color: #000" class="card-header">';
                        echo '<h4 style="color: white" class="my-0 font-weight-bold">' .$reg["nombre"]. '</h4>';
                    echo '</div>';
                    echo '<div style="background-color: #272429" class="card-body">';
                        echo '<img src=/bewolf-m/Menu/img/'.$reg['imagen'].' class="card-img-top" >';

                        echo '<p style="color: white";>'. $reg["descripcion"].'</p>';

                        echo '<h1 style="color: white" class="card-title pricing-card-title precio">Precio: $<span class="">'.$reg["precio"].'</span></h1>';

                        
                        echo '<a href=""   style="background-color: #fbaf32;border-color: #fbaf32" class="btn btn-block btn-primary agregar-carrito" data-id="1">Añadir al carrito</a>';
                    echo '</div>';
                echo '</div>';
}
          ?>
                
                

            </div>


        </div>

    </main>

    <script src="js/jquery-3.4.1.min.js"></script>
    <script src="js/bootstrap.min.js"></script>
    <script src="js/sweetalert2.min.js"></script>
    <script src="js/carrito.js"></script>
    <script src="js/pedido.js"></script>

</body>

</html>