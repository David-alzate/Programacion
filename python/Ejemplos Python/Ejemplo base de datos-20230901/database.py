import psycopg2

class Database():
    user =""
    password =""
    host=""

    def __init__(self, user, password, host):
        self.user = user
        self.password = password
        self.host = host

    def conectar(self):
        try:
            credenciales = {
                "dbname": "usuarios",
                "user": self.user,
                "password": self.password,
                "host": self.host,
                "port": 5432
            }
            conexion = psycopg2.connect(**credenciales)
            if conexion:
                print("Conexión exitosa")
            return conexion
        except psycopg2.Error as e:
            print("Ocurrió un error al conectar a PostgreSQL: ", e)