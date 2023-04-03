#include <iostream>
//Para que os códigos a seguir sejam entendidos, existe o include. Ou seja, uma biblioteca para traduzí-las no programa.
using namespace std;

int main() {
    int num, i =1;
    //int é uma forma de destacar valores inteiros
    
    cout << "Digite um número inteiro positivo: ";
    //O cout serve para que uma mensagem apareça na tela. No caso, a pergunta é 
    cin >> num;
    //o "num" será substituído de acordo com o valor que for colocado
    while (i <= num) {
      //o comando que repetirá até alcançar o que for necessário. No caso, será os números até alcançarem o número inteiro colocado.
        cout << i << " ";
        i++;
        //número i (1) pra cima
    }

    return 0;
}
