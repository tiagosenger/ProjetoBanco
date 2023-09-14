#include <iostream>
#include <string>
#include <ctime>

using namespace std;

struct ContaCliente
{
    string nome;
    string cpf;
    string endereco;
    string tel;
    string email;
    int agencia;
    int conta;
    double saldo;
};

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

ContaCliente cadastraCliente() {
    ContaCliente conta;
    cout << "Digite o seu nome: " << endl;
    getline(cin, conta.nome);

    cout << "Digite o seu CPF (xxx.xxx.xxx-xx): " << endl;
    getline(cin, conta.cpf);

    cout << "Digite o seu endereco: " << endl;
    getline(cin, conta.endereco);

    cout << "Digite o seu telefone ((xx) xxxxx-xxxx): " << endl;
    getline(cin, conta.tel);

    cout << "Digite o seu email: " << endl;
    getline(cin, conta.email);

    return conta; 

}

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


void sacar (){
    if (saldo >= ){
        saldo -= ;
        cout << "Saque de R$ " << valor << "Realizado com Sucesso! " << endl;
    } else {
        cout << "Saldo insuficiente para realizar o saque. " << endl;
    }
    cout << "Seu novo saldo é: R$ " << saldo <<endl;
    }

int main(){

int escolha;
    escolha = menu();
    //cout << "Opção desejada " << escolha;
    switch (escolha)
    {
    case 1:
        cout << "Opção escolhida: Abertura de conta" << endl;
        cadastraCliente();
        break;
    case 2: 
        cout << "Opção escolhida: Deposito" << endl;
        //deposito (1000);  teste da funcao deposito
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

    return 0;
} 