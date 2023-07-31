<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <title>Puntuacion</title>
</head>
<body>
<div class="contenidod">
<?php

$preg1=$_POST["preg1"];
$preg2=$_POST["preg2"];
$preg3=$_POST["preg3"];
$preg4=$_POST["preg4"];
$preg5=$_POST["preg5"];
$rc = 0;
$ri = 0;
$pf = 0;    

if($preg1 == 2){
    $rc = $rc + 1;
}else{
    $ri = $ri + 1;
}

if($preg2 == 2){
    $rc = $rc + 1;
}else{
    $ri = $ri + 1;
}

if($preg3 == 1){
    $rc = $rc + 1;
}else{
    $ri = $ri + 1;
}

if($preg4 == 2){
    $rc = $rc + 1;
}else{
    $ri = $ri + 1;
}

if($preg5    == 2){ 
    $rc = $rc + 1;
}else{
    $ri = $ri + 1;
}

$prc = $rc * 4;
$pri = $ri * -1;
$pf = $prc + $pri;

echo '<h4 class="texto">';
print("Su puntaje final fue de $pf puntos con $rc respuestas correctas y $ri respuestas incorrectas");
echo '</h4>';



?>
<div>
</body>
</html>