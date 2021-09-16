#include "Estudiante.h"
using namespace std;
Estudiante::Estudiante()
{
}
Estudiante::Estudiante(string n, string a, int e, int nP)
{
    nombre = n;
    apellido = a;
    edad = e;
    notaPromedio = nP;
}

void Estudiante::setNombre(string n)
{
    nombre = n;
}

string Estudiante::getNombre()
{
    return nombre;
}

void Estudiante::setApellido(string a)
{
    apellido = a;
}

string Estudiante::getApellido()
{
    return apellido;
}

void Estudiante::setEdad(int e)
{
    edad = e;
}
int Estudiante::getEdad()
{
    return edad;
}

void Estudiante::setNotaPromedio(int nP)
{
    notaPromedio = nP;
}
int Estudiante::getNotaPromedio()
{
    return notaPromedio;
}
bool Estudiante::mayorEdad(int e)
{

    bool mayor = false;

    if (e >= 18)
    {
        mayor = true;
    }
    return mayor;
}

string Estudiante::clasificacion(int nP)
{
    string resultado;

    if (notaPromedio >= 36 && notaPromedio <= 40)
    {
        resultado = "Alto rendimiento";
    }

    if (notaPromedio >= 28 && notaPromedio <= 35)
    {
        resultado = "Mediano rendimiento";
    }

    if (notaPromedio < 28)
    {
        resultado = "Bajo rendimiento";
    }
    return resultado;
}
