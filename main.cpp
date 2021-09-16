#include <iostream>
#include <string>
#include "Estudiante.h"
using namespace std;

int main()
{
  Estudiante tmpEstudiante("Carlos", "Manson", 19, 45);

  cout << tmpEstudiante.getNombre();
  return 0;
}