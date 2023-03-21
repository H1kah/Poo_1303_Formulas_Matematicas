#include <iostream>
using namespace std;

int main() {
    //está mostrando qual é o valor de cada uma. No caso, está sendo utilizado int, sendo o motivo para isso os valores que são inteiros.
    int a = 5;
    int b = 10;
    int c = 15;
    //resposta alternativa. Ou seja, se A < b && b < c, a respostá será "a ordem é: a, b, c"
    if (a < b && b < c) {
	//texto que aparecerá na tela
        cout<< "A ordem é: a, b, c" << endl;
    }
    //resposta alternativa. Ou seja, se A > b || b > c, a respostá será "Pelo menos uma das condições é verdadeira"
    if (a > b || b > c) {
	//texto que aparecerá na tela
        cout << "Pelo menos uma das condições é verdadeira" << endl;
    }
    //resposta alternativa. Ou seja, se !(a == b), a respostá será "a é diferente de b"
    if (!(a == b)) {
	//texto que aparecerá na tela
        cout << "a é diferente de b" << endl;
    }
    
    return 0;
}
