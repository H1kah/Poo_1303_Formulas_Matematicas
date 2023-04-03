#include <iostream>
using namespace std;

int main() {
    int num;
    
    do {
        //
        cout << "Digite um número entre 1 e 10: ";
        //será a mensagem que vai aparecer na interface do programa
        cin >> num;
        //quando um número for colocado, o cin fará com que ele seja o valor do num
    } while (num < 1 || num > 10);
    //será um número entre 1 e 10. O while repetirá o comando e considerará falso até que ache o número que foi digitado.
        cout << "Você digitou o número " << num << '.';
    //a mensagem aparecerá e o "num" é o valor que será substituído de acordo com o que foi colocado
        
return 0;
}
