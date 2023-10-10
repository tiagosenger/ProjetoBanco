#include <iostream>
#include <cmath>

using namespace std;

struct Ponto {
    double x;
    double y;
};

double calcularDistanciaEntrePontos(const Ponto& ponto1, const Ponto& ponto2) {
    double deltaX = ponto2.x - ponto1.x;
    double deltaY = ponto2.y - ponto1.y;
    return sqrt(deltaX * deltaX + deltaY * deltaY);
}

int main() {
    Ponto ponto1, ponto2;

    cout << "Digite as coordenadas do primeiro ponto:" << endl;
    cout << "X: ";
    cin >> ponto1.x;
    cout << "Y: ";
    cin >> ponto1.y;

    cout << "Digite as coordenadas do segundo ponto:" << endl;
    cout << "X: ";
    cin >> ponto2.x;
    cout << "Y: ";
    cin >> ponto2.y;

    double distancia = calcularDistanciaEntrePontos(ponto1, ponto2);

    cout << "A distância entre os dois pontos é: " << distancia << endl;

    return 0;
}
