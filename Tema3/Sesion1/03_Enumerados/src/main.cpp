#include <iostream>
using namespace std;

enum DiaSemana {LUNS = 1, MARTES, MERCORES, XOVES, VENRES, SABADO, DOMINGO};

const char diasSemanaTexto[][10] = {"LUNS", "MARTES", "MIERCOLES", "XOVES", "VENERS", "SABADO", "DOMINGO"};

int main() {
    DiaSemana hoxe = VENRES; // Asignamos un valor do enum. Almac´enase como enteiro
    cout << "Hoxe es o dia numero " << hoxe << " da semana." << endl;
    cout << "Hoxe es " << diasSemanaTexto[hoxe] << endl;
    return 0;
}