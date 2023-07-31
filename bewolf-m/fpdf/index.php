<?php
require('fpdf.php');


class PDF extends FPDF
{
// Cabecera de página
function Header()
{
    // Logo
    $this->Image('logo.png',10,8,33);
    // Arial bold 15
    $this->SetFont('Arial','B',15);
    // Movernos a la derecha
    $this->Cell(80);
    // Título
    $this->Cell(30,10,'Title',1,0,'C');
    // Salto de línea
    $this->Ln(20);
}

// Pie de página
function Footer()
{
    // Posición: a 1,5 cm del final
    $this->SetY(-15);
    // Arial italic 8
    $this->SetFont('Arial','I',8);
    // Número de página
    $this->Cell(0,10,'Page '.$this->PageNo().'/{nb}',0,0,'C');
}
}
 include("conexion.php");
  $registros=mysqli_query($conexion,"select id,nombre,apellido,correo,contrasena,telefono from usuario") or die("problemas en el select".mysqli_error($conexion));

$pdf = new FPDF();
$pdf->AddPage();
$pdf->SetFont('Arial','B',16);
while($row=mysqli_fetch_array($registros)){
    $pdf->cell(90, 10, $row['id'], 1, 0, 'C', 0);
    $pdf->cell(90, 10, $row['nombre'], 1, 0, 'C', 0);
    $pdf->cell(90, 10, $row['apellido'], 1, 0, 'C', 0);
    $pdf->cell(90, 10, $row['telefono'], 1, 1, 'C', 0);
}
$pdf->Output();
?>
