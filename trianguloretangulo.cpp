//o começo seria a biblioteca de onde as informações serão tiradas
#include <iostream>
using namespace std;
  //vai iniciar o código
int main() {
    //é um valor indeterminado, sendo nomeado como base, altura e área
    float base, altura, area;
    //o que vai mostrar na tela, a interface do programa
    cout << "Digite a base do triângulo retângulo";
    //o cin seria o valor determinado que é a base 
    cin >> base;
    //o que vai mostrar na tela, a interface do programa logo depois da primeira resposta
    cout << "Digite a altura do triângulo retângulo";
    //o cin seria o valor determinado que é a altura
    cin >> altura;
    //a fórmula que será utilizada na hora de fazer a conta
    area = (base * altura) / 2;
    //resposta para o valor colocado
    cout << "A area do triângulo retângulo: " << area << endl;
    
    return 0;
}