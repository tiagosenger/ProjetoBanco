    double saldo = 1000;

ContaCliente() {
    srand(time(nullptr));
    agencia = 10000 + rand()%50000 + 1;
    conta = 10000 + rand() %50000 + 1;
}

void ConsultaSaldo(){
    cout << "Agência: " << agencia << endl;
    cout << "Conta: " << conta << endl;
    cout << "Saldo: R$" << saldo << endl;
}