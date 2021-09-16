#include <iostream>
#include <string>
using namespace std;
class Estudiante
{
public:
    string nombre, apellido;
    int edad;
    int notaPromedio;

    Estudiante();

    Estudiante(string n, string a, int e, int nP);

    void setNombre(string tNombre);

    string getNombre();

    void setApellido(string tApellido);

    string getApellido();

    void setEdad(int tEdad);

    int getEdad();

    void setNotaPromedio(int tNotaPromedio);

    int getNotaPromedio();

    bool mayorEdad(int tEdad);

    string clasificacion(int tNota);
};