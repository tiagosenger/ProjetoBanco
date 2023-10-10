#include <ctime>    
    double saldo = 1000;

ContaCliente agenciaconta() {
    srand(time(nullptr));
    int agencia = 10000 + rand()%50000 + 1;
    int conta = 10000 + rand() %50000 + 1;
}

void ConsultaSaldo(){
    cout << "Agência: " << agencia << endl;
    cout << "Conta: " << conta << endl;
    cout << "Saldo: R$" << saldo << endl;
}
