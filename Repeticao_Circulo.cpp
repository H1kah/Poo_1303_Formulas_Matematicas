//Bilbioteca
#include <iostream>
using namespace std;
//iniciando o código
int main() {
    //char está se referindo o que é o verdadeiro
    char continuar = 's';
     //o comando para que o comando se repita logo após o que está à seguir
     while (continuar == 's' || continuar == 'S') {

    float raio, area;
    //está mostrando os valores, sendo PI o valor dado abaixo
    const float PI = 3.14159;
    //o que vai mostrar na tela, a interface do programa
    cout << "Digite o raio do circulo: ";
    //o cin seria o valor que será convertido para o raio
    cin >> raio;
    //a fórmula que será utilizada na hora de fazer a conta
    area = PI *raio *raio;
    //resposta para o valor colocado
    cout << "A area do ciculo eh: " << area << endl;

    cout << "Deseja continuar (s/n)?: ";
    cin >> continuar;
}
    return 0;
}