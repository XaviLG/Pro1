// Directivas do preprocesador
#include <iostream>
#define TOTAL_VALORES 5
using namespace std;
//Declaraci´ons de funci´ons e variables globais
float calcularMedia (float v1, float v2, float v3, float v4, float v5);
const char autor[] = "Xavier, Lugo";
// Funci´on principal
int main()
    {
        float v1, v2, v3, v4, v5;
        cout << "Programa para calcular a media de "
        << TOTAL_VALORES << " valores" << endl;
        cout << "Autor: " << autor << endl;
        cout << "Introduce valores: " << endl;
        cin >> v1 >> v2 >> v3 >> v4 >> v5;
        cout << "Media dos valores: " << calcularMedia (v1, v2, v3, v4, v5) << endl;
        return 0;
    }
//Funci´ons definidas polo usuario
    float calcularMedia (float v1, float v2, float v3, float v4, float v5)
    {
        float med;
        med = (v1 + v2 + v3 + v4 + v5) / TOTAL_VALORES;
        return med;
    }