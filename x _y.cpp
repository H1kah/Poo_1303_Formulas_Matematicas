//Bibliotecas. Um dicionário para entender o que está sendo programado
#include <iostream>
using namespace std;
//está iniciando 
int main() {
    //dizendo qual é o valor de x e y. No caso, int é apenas para números inteiros
    int x = 10;
    int y = 20;
    //if é uma possível situação. No caso, x > y
    if (x > y) {
        //cout é a mensagem que aparecerá caso cumpra os requisitos do if acima
        cout<< "x é maior que y" << endl;
    }
     //if é uma possível situação. No caso, x é menor que y
    if (x < y) {
        //cout é a mensagem que aparecerá caso cumpra os requisitos do if acima
        cout << "x é menor que y" << endl;
    }
     //if é uma possível situação. No caso, x é maior ou igual a y
    if (x >= y) {
        //cout é a mensagem que aparecerá caso cumpra os requisitos do if acima
        cout << "x é maior ou igual a y" << endl;
    }
     //if é uma possível situação. No caso x é menor ou igual a y
     if (x <= y) {
        //cout é a mensagem que aparecerá caso cumpra os requisitos do if acima
        cout << "x é menor ou igual a y" << endl;
     }
      //if é uma possível situação. No caos, x é igual a y
     if (x == y) {
        //cout é a mensagem que aparecerá caso cumpra os requisitos do if acima
        cout << "x é igual a y" << endl;
     }
      //if é uma possível situação. No caso, x é menor que y
     if (x < y) {
         //cout é a mensagem que aparecerá caso cumpra os requisitos do if acima
         cout << "x é diferente de y" << endl;
     }
    return 0;
}
