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
    double nota1, nota2, nota3, nota4;
    //o texto que aparecerá na interface
    cout << "Digite sua primeira nota do semestre >>>";
    //a resposta que for dada, será o valor que vai ser colocado como nota1
    cin >> nota1;
    //o texto que aparecerá na interface
    cout << "Digite sua segunda nota do semestre >>>";
    //o valor será colocado como nota2
    cin >> nota2;
    //o texto que aparecerá na interface
    cout << "Digite sua terceira nota do semestre >>>";
    //o valor será colocado como nota3
    cin >> nota3;
    //o texto que aparecerá na interface
    cout << "Digite sua quarta nota do semestre >>>";
    //o valor será colocado como nota4
    cin >> nota4;
    //está definindo o que é a soma, sendo soma = n1 + n2 + n3 + n4
    double soma = (nota1 + nota2 + nota3 + nota4);
    //fórmula que será utilizada 
    soma = (soma/4);
    //o texto que aparecerá na interface
    cout << "A sua média no semestre foi: " << soma << endl << endl;
    //possibilidades. Ou seja, se a soma for >= 7 (maior ou igual)...
    if(soma >= 7){
    //... a pessoa será aprovada, se não...
        cout << "Parabéns, você foi aprovado!" << endl;
    }
//...será reprovada. Ou seja, else é tipo um "porém", caso a primeira resposta não se encaixe no que precisa
    else {
        cout << "Eita, você foi reprovado!" << endl;
    }
    cout << "Deseja continuar (s/n)?" << endl;
    cin >> continuar;
    }
    return 0;
}
