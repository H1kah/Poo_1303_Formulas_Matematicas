//o começo seria a biblioteca de onde as informações serão tiradas
#include <iostream>
#include <cmath>
using namespace std;
  //vai iniciar o código
int main() {
    //é um valor indeterminado, sendo nomeado como raio e área
    float a, b, c;
    //o que vai mostrar na tela, a interface do programa
    cout << "Digite o valor de a: ";
    //o cin seria o valor que será convertido para a 
    cin >> a;
        //o que vai mostrar na tela, a interface do programa
    cout << "Digite o valor de b: ";
    //o cin seria o valor que será convertido para b
    cin >> b;
        //o que vai mostrar na tela, a interface do programa
    cout << "Digite o valor de c: ";
    //o cin seria o valor que será convertido para c
    cin >> c;
    //a fórmula que será utilizada na hora de fazer a conta
     c = (a * a) + (b * b);
     c = sqrt(c);
     
    //resposta para o valor colocado
    cout << "a resposta é: " << c << endl;
    
    return 0;
}
