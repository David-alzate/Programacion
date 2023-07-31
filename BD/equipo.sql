-- phpMyAdmin SQL Dump
-- version 5.1.0
-- https://www.phpmyadmin.net/
--
-- Servidor: 127.0.0.1
-- Tiempo de generación: 11-06-2021 a las 06:35:48
-- Versión del servidor: 10.4.19-MariaDB
-- Versión de PHP: 8.0.6

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Base de datos: `mantenimiento`
--

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `equipo`
--

CREATE TABLE `equipo` (
  `codigo` int(50) NOT NULL,
  `marca` varchar(20) NOT NULL,
  `procesador` varchar(20) NOT NULL,
  `ram` varchar(20) NOT NULL,
  `discoduro` varchar(20) NOT NULL,
  `sistemaoperativo` varchar(20) NOT NULL,
  `tarjetagrafica` varchar(20) NOT NULL,
  `pass` varchar(15) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Volcado de datos para la tabla `equipo`
--

INSERT INTO `equipo` (`codigo`, `marca`, `procesador`, `ram`, `discoduro`, `sistemaoperativo`, `tarjetagrafica`, `pass`) VALUES
(100, 'Acer', 'INTEL', '32 GB', '256 GB', 'WIN 10', 'RTX 3080', '123'),
(200, 'Acer', 'INTEL', '16 GB', '2 TB', 'IOS', 'RTX 3080', '123'),
(300, 'Hp', 'AMD', '32 GB', '1 TB', 'WIN 10', '2080 SUPER', '123'),
(400, 'Lenovo', 'INTEL', '64 GB', '2 TB', 'WIN 10', '2080 SUPER', '123'),
(500, 'Lenovo', 'AMD', '4 GB', '1 TB', 'LINUX', 'GTX 1660', '');

--
-- Índices para tablas volcadas
--

--
-- Indices de la tabla `equipo`
--
ALTER TABLE `equipo`
  ADD PRIMARY KEY (`codigo`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
