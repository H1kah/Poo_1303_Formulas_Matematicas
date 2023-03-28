#include <iostream>
using namespace std;

int main() {
    char op;
    float a, b;
    cout << "Entre com o operador +, -, *, /: ";
    cin >> op;
    cout << "Entre com dois valores: ";
    cin >> a >> b;
    
    switch (op) {
        case '+':
            cout << a << " + " << b << " = " << a + b;
            break;
        case '-':
            cout << a << " - " << b << " = " << a - b;
            break;
        case '*':
            cout << a << " * " << b << " = " << a * b;
            break;
        case '/':
            cout << a << " / " << b << " = " << a / b;
            break;
        default:
            cout << "Operador errado, por favor insira o operador correto";
            break;
}
return 0;
}
