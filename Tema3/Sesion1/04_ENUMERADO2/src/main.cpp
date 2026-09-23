#include <iostream>
using namespace std;

enum NivelBateria
{
    BALEIRO = 0,
    BAIXO = 25,
    MEDIO = 50,
    ALTO = 75,
    COMPLETO = 100
};

int main()
{
    NivelBateria bateria = COMPLETO;
     // Simulamos que a bater´ıa est´a ao 50%
    cout << "Nivel de baterıa actual: " << bateria << "%" << endl;
    return 0;
}