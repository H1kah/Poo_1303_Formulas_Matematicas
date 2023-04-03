#include <iostream>
//biblioteca para o programa ler os códigos
using namespace std;

int main() {
        int num;
    //mostrando o valor em destaque
        cout << "Digite um número inteiro positivo: ";
    //cout mostrará o que aparecerá na interface
        cin >> num;
    //toda resposta depois da mensagem denominará o que será o num. Isso a partir do cin
        cout << "Os primeiros " << num << " numeros pares são: ";
      //for é um comando de repetição. Ou seja, de acordo com o valor que for dado, o comando se repetirá até dar falso no sistema.
        for (int i = 2; i <= num * 2; i += 2) {
            cout << i << " ";
            
        }
return 0;
}
