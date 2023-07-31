<?php
session_start();
error_reporting(0);
$varsesion= $_SESSION['usuario'];
if($varsesion== null || $varsesion=''){
    echo "no tiene autorizacion";
    die();
}

?>
<html>
    <head>
        <link rel="icon" type="image/x-icon" href="./../assets/Hamburguesa.ico" />
        <title>Administrador</title>
        <style type="text/css">
            
            * {
                margin:2px;
                padding:2px;
                background:#212529;
            }
            
            #header {
                
                margin:auto;
                width:800px;
                font-family:Arial, Helvetica, sans-serif;
                font-color:green;
            }
            
            ul, ol {
                list-style:none;
            }
            
            .nav > li {
                float:left;
            }
            
            .nav li a {
                background-color:#000;
                color:#fff;
                text-decoration:none;
                padding:10px 12px;
                display:block;
            }
            
            .nav li a:hover {
                background-color:#434343;
            }
            
            .nav li ul {
                display:none;
                position:absolute;
                min-width:140px;
            }
            
            .nav li:hover > ul {
                display:block;
            }
            
            .nav li ul li {
                position:relative;
            }
            
            .nav li ul li ul {
                right:-140px;
                top:0px;
            }
            
        </style>
    </head>
    <body>
        <a href="#page-top"><h1 style="color:#E5E8E8 "><img src="./../assets/logo.png">Burger Town</h1></a>
        <div style="height: 300px"id="header">
            <ul class="nav">
                <li><a href="#page-top">Menú</a></li>
                <li><a href="">Usuarios</a>
                    <ul>
                        <li><a href="usuarios/registrar/registrar.html">Ingresar usuario</a></li>
                        <li><a href="usuarios/mostrarusuario.php">Mostrar usuarios</a></li>
                        <li><a href="usuarios/admin/registraradmin.html">Ingresar admin</a></li>
                        
                            
                        </li>

                    </ul>
                </li>
                <li><a href="">Productos</a>
                    <ul>
                        <li><a href="producto/frmproducto.html">Ingresar producto</a></li>
                        <li><a href="producto/mostrarproductos.php">Mostrar producto</a></li>
                        
                    </ul>
                </li>
                <li><a href="">acciones</a>
                    <ul>
                        <li><a href="salir.php">cerrar sesion</a></li>
                        <li><a href="./../login/iniciar sesion/cambiarcontraseña/cambiarcontraseña.html">cambiar contraseña</a></li>
                        
                            
                        </li>

                

            </ul>
        </div>
    </body>
</html>


