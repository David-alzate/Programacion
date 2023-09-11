import psycopg2

def conectar():
    try:
        credenciales = {
            "dbname": "prueba",
            "user": "postgres",
            "password": "abcd1234",
            "host": "localhost",
            "port": 5432
        }
        conexion = psycopg2.connect(**credenciales)
        if conexion:
            print("Conectado Exitosamente")
        return conexion
    except psycopg2.Error as e:
        print("Ocurrió un error al conectar a PostgreSQL: ", e)

def insertarUsuario(conexion, usuario):
    try:
        with conexion.cursor() as cursor:
            consulta = "INSERT INTO usuarios(nombre) VALUES (%s);"
            cursor.execute(consulta, (usuario,))
        conexion.commit()
    except psycopg2.Error as e:
        print("Ocurrió un error al insertar: ", e)
    finally:
        conexion.close()

def consultarUsuarios(conexion):
    try:
        with conexion.cursor() as cursor:
            cursor.execute("SELECT id, nombre FROM usuarios;")
            usuarios = cursor.fetchall()
            for usuario in usuarios:
                print(usuario)
    except psycopg2.Error as e:
        print("Ocurrió un error al consultar: ", e)
    finally:
        conexion.close()

def consultarUsuario(conexion, id):
    try:
        with conexion.cursor() as cursor:
            cursor.execute("SELECT id, nombre FROM usuarios WHERE id="+str(id))
            usuario = cursor.fetchone()
            if usuario:
                print(usuario)
            else:
                print("El usuario no existe")
    except psycopg2.Error as e:
        print("Ocurrió un error al consultar: ", e)
    finally:
        conexion.close()

def eliminarUsuario(conexion, id):
    try:
        with conexion.cursor() as cursor:

            consulta = "DELETE FROM usuarios WHERE id =" +str(id)
            cursor.execute(consulta)

        conexion.commit()
    except psycopg2.Error as e:
        print("Error eliminando: ", e)
    finally:
        conexion.close()

def editarUsuario(conexion, id, nombre):
    try:
        with conexion.cursor() as cursor:
            consulta = "UPDATE usuarios SET nombre = '" + str(nombre) + "' WHERE id = " + str(id)
            cursor.execute(consulta)
        conexion.commit()
    except psycopg2.Error as e:
        print("Ocurrió un error al editar: ", e)
    finally:
        conexion.close()
        
conexion = conectar()
consultarUsuarios(conexion)