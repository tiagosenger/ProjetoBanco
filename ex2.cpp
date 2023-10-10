#include <iostream>

using namespace std;

double converterCelsiusParaFahrenheit(double temperaturaCelsius) {
    return (temperaturaCelsius * 9.0 / 5.0) + 32.0;
}

double obterTemperaturaCelsiusDoUsuario() {
    double temperaturaCelsius;
    cout << "Digite a temperatura em graus Celsius: ";
    cin >> temperaturaCelsius;
    return temperaturaCelsius;
}

void exibirTemperaturaFahrenheit(double temperaturaFahrenheit) {
    cout << "A temperatura em graus Fahrenheit é: " << temperaturaFahrenheit << " °F" << endl;
}

int main() {
    double temperaturaCelsius = obterTemperaturaCelsiusDoUsuario();
    double temperaturaFahrenheit = converterCelsiusParaFahrenheit(temperaturaCelsius);
    exibirTemperaturaFahrenheit(temperaturaFahrenheit);

    return 0;
}
