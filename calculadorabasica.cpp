//Biblioteca
#include <iostream>
using namespace std;

int main() {
    //está adicionando as operações
    char op;
    //está dando os valores. No caso, por serem letras e não números, está sendo utilizado o float
    float a, b;
    //mensagem que vai aparecer na tela
    cout << "Entre com o operador +, -, *, /: ";
    //a resposta será correspondida de acordo com o que está pedindo. Ou seja, se não colocarem um op (operação), o sistema não vai entender
    cin >> op;
    //o que vai mostrar na tela
    cout << "Entre com dois valores: ";
    //quando for colocar um valor, substituirá o A e o B, continuando com o código 
    cin >> a >> b;
    //Diferente do if que só possibilita dois caminhos de acordo com o que ocorrer, o switch é uma versão aprimorada, pemitindo fazer o mesmo e um pouco mais. 
    switch (op) {
            //case, traduzindo para o português é caso. E, de acordo com o switch, caso for +, a resposta será a que está logo abaixo.
        case '+':
            cout << a << " + " << b << " = " << a + b;
             //acaba aqui, o break finaliza
            break;
             //caso for -, a resposta será a que está logo abaixo.
        case '-':
            cout << a << " - " << b << " = " << a - b;
             //acaba aqui, o break finaliza
            break;
             //caso for *, a resposta será a que está logo abaixo.
        case '*':
            cout << a << " * " << b << " = " << a * b;
             //acaba aqui, o break finaliza
            break;
             //caso for /, a resposta será o que está logo abaixo.
        case '/':
            cout << a << " / " << b << " = " << a / b;
             //acaba aqui, o break finaliza
            break;
            //Um problema, ou seja, caso dê um erro, aparecerá essa mensagem na tela
        default:
            cout << "Operador errado, por favor insira o operador correto";
            //acaba aqui, o break finaliza
            break;
}
return 0;
}
