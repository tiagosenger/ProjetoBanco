#include <iostream>

using namespace std;

unsigned long long calcularFatorial(int numero) {
    unsigned long long fatorial = 1;

    for (int i = 1; i <= numero; i++) {
        fatorial *= i;
    }

    return fatorial;
}

int main() {
    int num1 = 5;
    int num2 = 7;
    int num3 = 10;

    unsigned long long fatorial1 = calcularFatorial(num1);
    cout << "O fatorial de " << num1 << " é: " << fatorial1 << endl;

    unsigned long long fatorial2 = calcularFatorial(num2);
    cout << "O fatorial de " << num2 << " é: " << fatorial2 << endl;

    unsigned long long fatorial3 = calcularFatorial(num3);
    cout << "O fatorial de " << num3 << " é: " << fatorial3 << endl;

    return 0;
}
