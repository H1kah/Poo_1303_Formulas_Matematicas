#include <iostream>
using namespace std;

int main() {
    int num;
    
    do {
        cout << "Digite um número entre 1 e 10: ";
        cin >> num;
    } while (num < 1 || num > 10);
    
        cout << "Você digitou o número " << num << '.';
        
return 0;
}