//Bibliotecas. Um dicionário para entender o que está sendo programado
#include <iostream>
using namespace std;
//está iniciando 
int main() {
    //char está se referindo o que é o verdadeiro
    char continuar = 's';
    //o comando para que o comando se repita logo após o que está a seguir
    while (continuar == 's' || continuar == 'S') {
    //doble seria um float, mas com o dobro de precisão, uma versão 
    string nome;
    double AC1, AC2, AG, AF, RA;
    double soma;
    
    cout << "Digite seu nome e seu RA: ";
    cin >> nome >> RA;
    
    cout << "-Calculadora para a média da Facens-" << endl;
    cout << "Digite sua AC1: ";
    //a resposta que for dada, será o valor que vai ser colocado como nota1
    cin >> AC1;
    //o texto que aparecerá na interface
    cout << "Digite sua AC2: ";
    //o valor será colocado como nota2
    cin >> AC2;
    //o texto que aparecerá na interface
    cout << "Digite sua AG: ";
    //o valor será colocado como nota3
    cin >> AG;
    //o texto que aparecerá na interface
    cout << "Digite sua AF: ";
    //o valor será colocado como nota4
    cin >> AF;
    //aqui é uma das fórmulas que serão colocadas e substituídas de acordo com o que for colocado
    AC1 = AC1 * 0.15;
    AC2 = AC2 * 0.35;
    AG = AG * 0.10;
    AF = AF * 0.40;
    //fórmula final
    soma = (AC1 + AC2 + AG + AF);
    //SWITCH é um tipo de "if", só que mais avançado. Ou seja, se uma coisa n acontecer como pedido, outra alternativa surgirá
    switch((int)soma) {
    //case é caso. Ou seja, caso for 10, aparecerá a mensagem lá de baixo
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    //mensagem que aparecerá na interface
    cout << "Parabéns, "<<nome<<". Você passou com "<<soma<< endl;
    //finalizando o código
    break;
    //case é caso. Ou seja, caso for 10, aparecerá a mensagem lá de baixo
    case 4:
    case 3:
    //mensagem que aparecerá na interface
    cout << "Vacilou aí, vai fazer recuperação por conta do seu "<<soma<< endl;
    //finalizando o código
    break;
    default:
    cout << "KKKKKKK se ferrou, "<<nome<<". Reprovou com "<<soma<< endl;
    break;
    }
     //mensagem que aparecerá na tela
    cout << "Deseja continuar (s/n)?: ";
  //cin é a informação que será preenchida de acordo com o que for colocado
    cin >> continuar;
    }
    return 0;
}
