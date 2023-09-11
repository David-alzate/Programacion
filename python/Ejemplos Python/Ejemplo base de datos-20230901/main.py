import psycopg2
from usuario import *
from database import *

conexion = Database("postgres", "abcd1234", "localhost")
usuario = Usuario
usuario2 = Usuario
usuario3 = Usuario
usuario4 = Usuario
usuario5 = Usuario
usuario6 = Usuario


if (usuario.crearUsuario(conexion.conectar(), "Pepito", "Perez")):
    print("USUARIO CREADO EXITOSAMENTE")
else:
    print("ERROR DE CREACION")

usuario.consultarUsuario(conexion.conectar(),8)
usuario.consultarUsuarios(conexion.conectar())

usuario.actualizarUsuario(conexion.conectar(), 5, "Camilo")
usuario.eliminarUsuario(conexion.conectar(), 5)

