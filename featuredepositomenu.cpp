int deposito(double saldo/*ContaCliente conta*/){
    double valor;
  
   /*cout << "Informe a agencia (5 digitos): " << endl;
   cin >> conta.agencia; 
   cout << "Informe a conta (6 digitos): " << endl;
   cin >> conta.conta;*/
   cout << "Informe o valor a ser depositado: " << endl;
   cin >> valor;
   saldo = saldo + valor;
   cout << "Saldo atualizado: " << saldo << endl;
    return saldo;
} 

int menu (){
    int opcao;
    cout << "Olá! Bem vindo ao nosso banco. Selecione uma das opções abaixo: " << endl;
    cout << " 1 - Abertura de conta" << endl;
    cout << " 2 - Deposito" << endl;
    cout << " 3 - Saque" << endl;
    cout << " 4 - Extrato" << endl;
    cin >> opcao;
    return opcao;


} 


int main(){
    int escolha;
    escolha =menu();
    //cout << "Opção desejada " << escolha;
    switch (escolha)
    {
    case 1:
        cout << "Opção escolhida: Abertura de conta";
        break;
    case 2: 
        cout << "Opção escolhida: Deposito" << endl;
        deposito (1000); // teste da funcao deposito
        break;
    case 3:
        cout << "Opção escolhida: Saque";
        break;
    case 4:
        cout << "Opção escolhida: Extrato";
        break;
    
    default:
        cout << "Opção inválida!";
        break;
    }