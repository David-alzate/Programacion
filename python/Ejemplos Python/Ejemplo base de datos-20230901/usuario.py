import psycopg2

class Usuario():
    nombre =""
    apellido = ""

    def __init__(self, nombre, apellido):
        self.nombre = nombre
        self.apellido = apellido

    def crearUsuario(conexion, nombre, apellido):
        try:
            with conexion.cursor() as cursor:
                consulta = "INSERT INTO usuarios(nombre, apellido) VALUES (%s, %s);"
                cursor.execute(consulta, (nombre, apellido))
            conexion.commit()
            return True
        except psycopg2.Error as e:
            print("Ocurrió un error al crear el usuario: ", e)
            return False

    def consultarUsuario(conexion, id):
        try:
            with conexion.cursor() as cursor:
                cursor.execute("SELECT * FROM usuarios WHERE id="+str(id))
                usuario = cursor.fetchone()
                if usuario:
                    print(usuario)
                else:
                    print("El usuario no existe")
        except psycopg2.Error as e:
            print("Ocurrió un error al consultar: ", e)

    def consultarUsuarios(conexion):
        try:
            with conexion.cursor() as cursor:
                cursor.execute("SELECT * FROM usuarios;")
                usuarios = cursor.fetchall()
                for usuario in usuarios:
                    print(usuario)
        except psycopg2.Error as e:
            print("Ocurrió un error al consultar: ", e)

    def actualizarUsuario(conexion, id, nombre):
        try:
            with conexion.cursor() as cursor:
                consulta = "UPDATE usuarios SET nombre = '" + str(nombre) + "' WHERE id = " + str(id)
                cursor.execute(consulta)
            conexion.commit()
            print("El registro se actualizo con exito")
        except psycopg2.Error as e:
            print("Ocurrió un error al editar: ", e)

    def eliminarUsuario(conexion, id):
        try:
            with conexion.cursor() as cursor:
                consulta = "DELETE FROM usuarios WHERE id =" + str(id)
                cursor.execute(consulta)
                print("Usuario eliminado con exito")
            conexion.commit()
        except psycopg2.Error as e:
            print("Error eliminando: ", e)