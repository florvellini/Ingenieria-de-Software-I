#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Clase 1: Estudiante
class Estudiante {
private:
    string nombre;
    int edad;
public:
    Estudiante(string n, int e) {
        nombre = n;
        edad = e;
    }

    string getNombre() {
        return nombre;
    }

    int getEdad() {
        return edad;
    }
};

// Clase 2: DatosEstudiantes (solo muestra datos)
class DatosEstudiantes {
public:
    void mostrar(Estudiante e) {
        cout << "Nombre: " << e.getNombre() << endl;
        cout << "Edad: " << e.getEdad() << endl;
    }
};

// Clase 3: GuardarDatos (solo guarda datos)
class GuardarDatos {
public:
    void guardar(Estudiante e) {
        ofstream archivo("datos_estudiantes.txt", ios::app);
        if (archivo.is_open()) {
            archivo << e.getNombre() << ", " << e.getEdad() << endl;
            archivo.close();
        } else {
            cout << "No se pudo abrir el archivo." << endl;
        }
    }
};

// Programa principal
int main() {
    Estudiante est("Florencia", 25);

    DatosEstudiantes datos;
    datos.mostrar(est);

    GuardarDatos guardar;
    guardar.guardar(est);

    return 0;
}
