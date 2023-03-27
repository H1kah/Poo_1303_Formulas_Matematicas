#include <iostream>
using namespace std;

int main() {
    int num;
    
        cout << "Digite um número inteiro positivo: ";
        cin >> num;
    
        cout << "Os primeiros " << num << " numeros pares são: ";
        
        for (int i = 2; i <= num * 2; i += 2) {
            cout << i << " ";
            
        }
return 0;
}