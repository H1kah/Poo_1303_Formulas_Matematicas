//o começo seria a biblioteca de onde as informações serão tiradas
#include <iostream>
//outra biblioteca
#include <cmath>
using namespace std;
    //vai iniciar o código
int main() {
    //é um valor indeterminado, sendo nomeado a partir de letras
    float a, b, c, x1, x2, delta;
    //o que vai mostrar na tela, a interface do programa
    cout << "Digite o valor de a: ";
    //o cin seria a indicação qeu está se referindo ao a
    cin >> a;
    //o que vai mostrar na tela, a interface do programa
    cout << "Digite o valor de b: ";
    //o cin seria a indicação qeu está se referindo ao b
    cin >> b;
    //o que vai mostrar na tela, a interface do programa
    cout << "Digite o valor de c: ";
    //o cin seria a indicação qeu está se referindo ao c
    cin >> c;
    //a fórmula que será utilizada na hora de fazer a conta
    //fórmula do delta
    delta = pow(b, 2) - 4 * a * c;
    // 1 - é a fórmula que está antes do delta, ou seja, o que está fora da raíz onde o delta está
    // 2 - o if seria as opões que dão. Traduzindo para o pt-bt = se 
    if (delta >= 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        //resposta final
        cout << "As raízes da equação são: " << x1 << " e " << x2 << endl;
    }
    else {
        //resposta alternativa caso não cumpra os requisitos anteriores
        cout << "A equação não tem raízes reais." << endl;
    }
    
    return 0;
}