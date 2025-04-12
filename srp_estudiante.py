# Clase 1: Estudiante - Tiene la responsabilidad de representar un estudiante
class Estudiante:
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad

# Clase 2: DatosEstudiantes - Tiene la responsabilidad de mostrar los datos
class DatosEstudiantes:
    def mostrar(self, estudiante):
        print(f"Nombre: {estudiante.nombre}")
        print(f"Edad: {estudiante.edad}")

# Clase 3: GuardarDatos - Tiene la responsabilidad de guardar los datos (simulado)
class GuardarDatos:
    def guardar(self, estudiante):
        with open("datos_estudiantes.txt", "a") as archivo:
            archivo.write(f"{estudiante.nombre}, {estudiante.edad}\n")

# --- Uso del código ---
# Creamos un estudiante
est1 = Estudiante("Florencia", 25)

# Mostramos sus datos
datos = DatosEstudiantes()
datos.mostrar(est1)

# Guardamos los datos
guardador = GuardarDatos()
guardador.guardar(est1)
