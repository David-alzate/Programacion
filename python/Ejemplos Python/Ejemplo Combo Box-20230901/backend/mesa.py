import psycopg2
from backend.modelo import BaseDatos

class Mesa():
    def crearMesa(conexion, mesanumero, descripcion):
        try:
            with conexion.cursor() as cursor:
                consulta = "INSERT INTO mesas(mesanumero, descripcion) VALUES (%s, %s);"
                cursor.execute(consulta, (mesanumero, descripcion))
            conexion.commit()
            return True
        except psycopg2.Error as e:
            print("Ocurrió un error al crear la mesa: ", e)
            return False

    def consultarMesa(conexion, mesanumero):
        try:
            with conexion.cursor() as cursor:
                cursor.execute("SELECT * FROM mesas WHERE mesanumero ='" + str(mesanumero) + "';")
                mesa = cursor.fetchone()
                if mesa:
                    return mesa
                else:
                    return False
        except psycopg2.Error as e:
            print("Ocurrió un error al consultar: ", e)

    def consultarMesas(conexion):
        try:
            with conexion.cursor() as cursor:
                cursor.execute("SELECT * FROM mesas;")
                mesas = cursor.fetchall()
                return mesas
        except psycopg2.Error as e:
            print("Ocurrió un error al consultar: ", e)

    def actualizarMesa(conexion, mesanumero, descripcion):
        try:
            with conexion.cursor() as cursor:
                consulta = "UPDATE mesas SET descripcion = '" + str(descripcion) + "' WHERE mesanumero = " + str(mesanumero)
                cursor.execute(consulta)
            conexion.commit()
            print("El registro se actualizo con exito")
        except psycopg2.Error as e:
            print("Ocurrió un error al editar: ", e)

    def eliminarMesa(conexion, mesanumero):
        try:
            with conexion.cursor() as cursor:
                consulta = "DELETE FROM mesas WHERE mesanumero =" + str(mesanumero)
                cursor.execute(consulta)
                print("Mesa eliminada con exito")
            conexion.commit()
        except psycopg2.Error as e:
            print("Error eliminando: ", e)


"""dataBase = BaseDatos("postgres", "abcd1234", "localhost")
conexion = dataBase.conectar()
mesa = Mesa

mesa.crearMesa(conexion, 1, "Mesa principal")
mesa.crearMesa(conexion, 2, "Mesa exterior 1")
mesa.crearMesa(conexion, 3, "Mesa exterior 2")

resultado = mesa.consultarMesas(conexion)

for mesa in resultado:
    print(mesa)"""