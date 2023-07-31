-- phpMyAdmin SQL Dump
-- version 5.1.0
-- https://www.phpmyadmin.net/
--
-- Servidor: 127.0.0.1
-- Tiempo de generación: 02-09-2021 a las 06:43:00
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
-- Base de datos: `biblioteca_davidalzate`
--

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `autor`
--

CREATE TABLE `autor` (
  `codigo_autor` int(11) NOT NULL,
  `nombre` varchar(50) NOT NULL,
  `apellido` varchar(50) NOT NULL,
  `nacionalidad` varchar(50) NOT NULL,
  `reconocimientos` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Volcado de datos para la tabla `autor`
--

INSERT INTO `autor` (`codigo_autor`, `nombre`, `apellido`, `nacionalidad`, `reconocimientos`) VALUES
(211, 'camilo', 'bernal', 'colombiano', 'premio india'),
(927, 'gabriel', 'garcia', 'colombiano', 'premio india catalina'),
(981, 'gabriel', 'marquez', 'colombiano', 'nobel');

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `libro_davidalzate`
--

CREATE TABLE `libro_davidalzate` (
  `id_libro` int(10) NOT NULL,
  `titulo` varchar(100) NOT NULL,
  `isbn` varchar(30) NOT NULL,
  `editorial` varchar(60) NOT NULL,
  `num_paginas` int(11) NOT NULL,
  `autor` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Volcado de datos para la tabla `libro_davidalzate`
--

INSERT INTO `libro_davidalzate` (`id_libro`, `titulo`, `isbn`, `editorial`, `num_paginas`, `autor`) VALUES
(386, 'el espacio ', '3h3s5', 'obeja negra', 223, 211),
(456, 'la noche estrellada ', '8s12w', 'powet opera', 70, 981),
(987, 'la vida ', '2a3r4', 'globo azul', 80, 927);

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `prestamos_davidalzate`
--

CREATE TABLE `prestamos_davidalzate` (
  `idprestamo` int(10) NOT NULL,
  `idlibro` int(10) NOT NULL,
  `idusuario` int(10) NOT NULL,
  `fecprestamo` datetime NOT NULL,
  `fecdevolucion` datetime NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Volcado de datos para la tabla `prestamos_davidalzate`
--

INSERT INTO `prestamos_davidalzate` (`idprestamo`, `idlibro`, `idusuario`, `fecprestamo`, `fecdevolucion`) VALUES
(98, 456, 231, '0000-00-00 00:00:00', '0000-00-00 00:00:00'),
(432, 987, 123, '0000-00-00 00:00:00', '0000-00-00 00:00:00'),
(714, 386, 321, '0000-00-00 00:00:00', '0000-00-00 00:00:00');

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `usuario_davidalzate`
--

CREATE TABLE `usuario_davidalzate` (
  `idusuario` int(10) NOT NULL,
  `nombre` varchar(50) NOT NULL,
  `direccion` varchar(50) NOT NULL,
  `telefono` varchar(20) NOT NULL,
  `fecnacimiento` date DEFAULT NULL,
  `apellido` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Volcado de datos para la tabla `usuario_davidalzate`
--

INSERT INTO `usuario_davidalzate` (`idusuario`, `nombre`, `direccion`, `telefono`, `fecnacimiento`, `apellido`) VALUES
(123, 'david', 'cll 15 13aa 34', '3127054715', '2005-01-26', 'alzate'),
(231, 'laura', 'cll 18 11 24', '3130472363', '2001-09-16', 'salazar'),
(321, 'santiago', 'cll 15 16 35', '3133233333', '2002-03-13', 'jimenez');

--
-- Índices para tablas volcadas
--

--
-- Indices de la tabla `autor`
--
ALTER TABLE `autor`
  ADD PRIMARY KEY (`codigo_autor`);

--
-- Indices de la tabla `libro_davidalzate`
--
ALTER TABLE `libro_davidalzate`
  ADD PRIMARY KEY (`id_libro`);

--
-- Indices de la tabla `prestamos_davidalzate`
--
ALTER TABLE `prestamos_davidalzate`
  ADD PRIMARY KEY (`idprestamo`);

--
-- Indices de la tabla `usuario_davidalzate`
--
ALTER TABLE `usuario_davidalzate`
  ADD PRIMARY KEY (`idusuario`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
