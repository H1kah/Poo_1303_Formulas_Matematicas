//o começo seria a biblioteca de onde as informações serão tiradas
#include <iostream>
using namespace std;
  //vai iniciar o código
int main() {
    //´é um valor indeterminado, sendo nomeado como raio e área
    float raio, area;
    //está mostrando os valores, sendo PI o valor dado abaixo
    const float PI = 3.14159;
    //o que vai mostrar na tela, a interface do programa
    cout << "Digite o raio do circulo ";
    //o cin seria o valor que será convertido para o raio
    cin >> raio;
    //a fórmula que será utilizada na hora de fazer a conta
    area = PI *raio *raio;
    //resposta para o valor colocado
    cout << "A area do ciculo eh: " << area << endl;
    
    return 0;
}