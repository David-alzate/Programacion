import psycopg2
from backend.modelo import BaseDatos

class Producto():
    def crearProducto(conexion, nombre, ingredientes, tamano, tipo):
        try:
            with conexion.cursor() as cursor:
                consulta = "INSERT INTO productos(nombre, ingredientes, tamano, tipo) VALUES (%s, %s, %s, %s);"
                cursor.execute(consulta, (nombre, ingredientes, tamano, tipo))
            conexion.commit()
            return True
        except psycopg2.Error as e:
            print("Ocurrió un error al crear el producto: ", e)
            return False

    def consultarProducto(conexion, id_producto):
        try:
            with conexion.cursor() as cursor:
                cursor.execute("SELECT * FROM usuarios WHERE id_producto='" + str(id_producto) + "';")
                producto = cursor.fetchone()
                if producto:
                    return producto
                else:
                    return False
        except psycopg2.Error as e:
            print("Ocurrió un error al consultar: ", e)

    def consultarProductos(conexion):
        try:
            with conexion.cursor() as cursor:
                cursor.execute("SELECT * FROM productos;")
                productos = cursor.fetchall()
                return productos
        except psycopg2.Error as e:
            print("Ocurrió un error al consultar: ", e)

    def actualizarProducto(conexion, id, nombre):
        try:
            with conexion.cursor() as cursor:
                consulta = "UPDATE usuarios SET nombre = '" + str(nombre) + "' WHERE id = " + str(id)
                cursor.execute(consulta)
            conexion.commit()
            print("El registro se actualizo con exito")
        except psycopg2.Error as e:
            print("Ocurrió un error al editar: ", e)

    def eliminarProducto(conexion, id):
        try:
            with conexion.cursor() as cursor:
                consulta = "DELETE FROM usuarios WHERE id =" + str(id)
                cursor.execute(consulta)
                print("Usuario eliminado con exito")
            conexion.commit()
        except psycopg2.Error as e:
            print("Error eliminando: ", e)


"""dataBase = BaseDatos("postgres", "abcd1234", "localhost")
conexion = dataBase.conectar()
producto = Producto

pizza1 = producto.crearProducto(conexion, "Pizza Jamón y queso grande", "Jamon, queso", "Grande", 1)
pizza2 = producto.crearProducto(conexion, "Pizza Jamón y queso mediana", "Jamon, queso", "Mediana", 1)
pizza3 = producto.crearProducto(conexion, "Pizza Jamón y queso pequeña", "Jamon, queso", "Pequeña", 1)
pizza4 = producto.crearProducto(conexion, "Pizza Hawaiana grande", "Jamon, queso, piña", "Grande", 1)
pizza5 = producto.crearProducto(conexion, "Pizza Hawaiana mediana", "Jamon, queso, piña", "Mediana", 1)
pizza6 = producto.crearProducto(conexion, "Pizza Hawaiana pequeña", "Jamon, queso, piña", "Pequeña", 1)
bebida = producto.crearProducto(conexion, "Coca Cola 350 ml", "Coca Cola", "350 ml", 2)
bebida2 = producto.crearProducto(conexion, "Coca Cola 1.5 litros", "Coca Cola", "1.5 litros", 2)
bebida3 = producto.crearProducto(conexion, "Coca Cola 3 litros", "Coca Cola", "3 litros", 2)

resultado = producto.consultarProductos(conexion)

for producto in resultado:
    print(producto)"""