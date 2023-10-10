#include <iostream>
#include <string>

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
};

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

int main(){
    ContaCliente novaConta = cadastraCliente();

    cout << novaConta.nome <<endl;
    cout << novaConta.cpf <<endl;
    cout << novaConta.endereco <<endl;
    cout << novaConta.tel <<endl;
    cout << novaConta.email <<endl;


    return 0;
} 