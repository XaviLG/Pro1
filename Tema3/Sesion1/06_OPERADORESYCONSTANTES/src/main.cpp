#include <iostream>
#include <math.h>
using namespace std;

const float PI = 3.14;
float calperimetro(float radio);
float calarea(float radio);

int main()
{
   float radio;

   cout << "Introduce al radio" << endl;
   cin >> radio;

   cout << "El perimetro es: " << calperimetro(radio) << endl;
   cout << "El area es: " << calarea(radio) << endl;

   //Si se cambia por int, solo se podrian introducir valores enteros y no reales. Y al hacer tener declaro PI como float,
   //Ocurriria un error al almacenar el calculo.
    return 0;
}

float calperimetro(float radio){
    return 2 * PI * radio;
}

float calarea(float radio){
    return PI * pow(radio,2);
}   