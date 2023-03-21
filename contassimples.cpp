//Bilbioteca
#include <iostream>
using namespace std;
//iniciando o código
int main() {
    //apresentando os valores utilizando números inteiros
    int num1 = 10, num2 = 4;
    int soma, multi, divi, modulo, subt;
    //fórmulas de soma, multiplicação, divisão, módulo e subtração. A partir das fórmulas, será substituído cada coisinha com seu devido valor.
    soma = num1 + num2;
    multi = num1 * num2;
    divi = num1 / num2;
    modulo = num1%num2;
    subt = num1 - num2;
    //A interface, colocando o que aparecerá na hora de rodar
    cout<<soma<<endl;
    cout<<multi<<endl;
    cout<<divi<<endl;
    cout<<modulo<<endl;
    cout<<subt<<endl;

    return 0;
}