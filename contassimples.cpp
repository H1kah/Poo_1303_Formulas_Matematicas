//Bilbioteca
#include <iostream>
using namespace std;
//iniciando o código
int main() {
    //apresentando os valores utilizando números inteiros
    int num1 = 10, num2 = 4;
    int soma, multi, divi, modulo, subt;
    //fórmulas de soma, multiplicação, divisão, módulo e subtração. A partir das fórmulas, será substituído cada coisinha com seu devido valor.
    soma = num1 + num2;
    multi = num1 * num2;
    divi = num1 / num2;
    modulo = num1%num2;
    subt = num1 - num2;
    //É a interface, o que vai ser mostrado como resposta final. No caso, a soma, mult, divi, modulo e subt serão substituídos, farão a conta a partir da fórmula...
    //... e vão aparecer na tela com os resultados.
    cout<<"Contas de + * / % - feitas a partir dos números 10 e 4:"<<endl;
    cout<<"soma: "<<soma<<endl;
    cout<<"mult: "<<multi<<endl;
    cout<<"divi: "<<divi<<endl;
    cout<<"módulo: "<<modulo<<endl;
    cout<<"subt: "<<subt<<endl;

    return 0;
}
