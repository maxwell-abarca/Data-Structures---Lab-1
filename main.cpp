#include <iostream>
#include <string>
#include "Estudiante.h"

using namespace std;

int main() {
    string nombre, apellido;
    int edad, nota;
    cout << "Ingrese el nombre del estudiante";
    cin >> nombre;
    cout << "Ingrese el apellido del estudiante";
    cin >> apellido;
    cout << "Ingrese el la edad del estudiante";
    cin >> edad;
    cout << "Ingrese la nota del estudiante";
    cin >> nota;


    Estudiante tmpEstudiante(nombre, apellido, edad, nota);
    string mayorEdad = (tmpEstudiante.mayorEdad(tmpEstudiante.getEdad())) ? "El estudiante " +
                                                                            tmpEstudiante.getNombre() +
                                                                            " es mayor de edad"
                                                                          : "El estudiante " +
                                                                            tmpEstudiante.getNombre() +
                                                                            " es menor de edad";
    cout << mayorEdad << endl;
    cout << tmpEstudiante.clasificacion(tmpEstudiante.getNotaPromedio());

    return 0;
}