-- phpMyAdmin SQL Dump
-- version 5.0.4
-- https://www.phpmyadmin.net/
--
-- Servidor: 127.0.0.1
-- Tiempo de generación: 23-09-2021 a las 16:03:20
-- Versión del servidor: 10.4.17-MariaDB
-- Versión de PHP: 8.0.1

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Base de datos: `hotel`
--

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `hotel`
--

CREATE TABLE `hotel` (
  `codigo_hotel` int(4) NOT NULL,
  `categoria` varchar(50) NOT NULL,
  `pais` varchar(50) NOT NULL,
  `nombre` varchar(50) NOT NULL,
  `ciudad` varchar(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Volcado de datos para la tabla `hotel`
--

INSERT INTO `hotel` (`codigo_hotel`, `categoria`, `pais`, `nombre`, `ciudad`) VALUES
(0, '3 estrellas', 'colombia', 'joles', 'medellin'),
(1, '5 estrellas', 'colombia', 'bewolf', 'pereira'),
(2, '5 estrellas', 'puerto rico', 'hulma', 'san juan'),
(3, '4 estrellas', 'argentina', 'edda', 'buenos aire');

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `reserva`
--

CREATE TABLE `reserva` (
  `codigo` int(10) NOT NULL,
  `fecha_reserva` date NOT NULL,
  `habitacion` varchar(50) NOT NULL,
  `id_usuario` int(4) NOT NULL,
  `codigo_hotel` int(4) NOT NULL,
  `ciudad` varchar(50) NOT NULL,
  `fecha_inicio` date NOT NULL,
  `fecha_fin` date NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Volcado de datos para la tabla `reserva`
--

INSERT INTO `reserva` (`codigo`, `fecha_reserva`, `habitacion`, `id_usuario`, `codigo_hotel`, `ciudad`, `fecha_inicio`, `fecha_fin`) VALUES
(1, '2021-09-13', '225', 5, 0, 'medellin', '2021-09-09', '2021-09-14'),
(2, '2021-12-16', '312', 4, 1, 'pereira', '2021-12-15', '2021-12-17'),
(10, '2021-09-20', '112', 3, 2, 'buenos aires', '2021-09-19', '2021-09-21');

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `usuario`
--

CREATE TABLE `usuario` (
  `id` int(4) NOT NULL,
  `nombre` varchar(50) NOT NULL,
  `apellido` varchar(50) NOT NULL,
  `telefono` varchar(50) NOT NULL,
  `direccion` varchar(50) NOT NULL,
  `edad` varchar(50) NOT NULL,
  `fecha_nacimiento` date NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Volcado de datos para la tabla `usuario`
--

INSERT INTO `usuario` (`id`, `nombre`, `apellido`, `telefono`, `direccion`, `edad`, `fecha_nacimiento`) VALUES
(3, 'albeiro', 'alzate', '3127053816', 'calle 14 n34 5', '23', '1995-08-23'),
(4, 'alfonso', 'lopez', '3007053654', 'calle 12 n 5', '16', '2005-08-23'),
(5, 'david', 'alzate', '3147232323', 'calle 2 n 5', '17', '2004-08-23');

--
-- Índices para tablas volcadas
--

--
-- Indices de la tabla `hotel`
--
ALTER TABLE `hotel`
  ADD PRIMARY KEY (`codigo_hotel`);

--
-- Indices de la tabla `reserva`
--
ALTER TABLE `reserva`
  ADD PRIMARY KEY (`codigo`);

--
-- Indices de la tabla `usuario`
--
ALTER TABLE `usuario`
  ADD PRIMARY KEY (`id`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
