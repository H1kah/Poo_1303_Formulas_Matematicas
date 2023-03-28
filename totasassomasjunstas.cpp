#include <iostream>
using namespace std;

float a, b;
int soma ()
{
    int resultado;
    resultado = a + b;
    return resultado;
}
int menos ()
{
    int resultado;
    resultado = a - b;
    return resultado;
}
int mult ()
{
    int resultado;
    resultado = a * b;
    return resultado;
}
float divi ()
{
    float resultado;
    resultado = a/b;
    return resultado;
}
 int main () {
    
    cout << "Digite dois números: ";
    cin >> a >> b;
    
    cout << "A soma é: " << soma() << endl;
    cout << "A subtração é: " << menos() << endl;
    cout << "A multipicação é: " << mult() << endl;
    cout << "A divisão é: " << divi() << endl;
}