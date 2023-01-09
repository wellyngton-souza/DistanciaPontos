#include <iostream>
#include <math.h>

using namespace std;

int main(){
    system("clear");
    float pontoAx, pontoAy, pontoBx, pontoBy;
    float resultado;

    cout << "Digite o Valor do ponto A:\n";
    cout << "X: ";
    cin >> pontoAx;
    cout << "Y: ";
    cin >> pontoAy;

    cout << "Digite o Valor do ponto B:\n";
    cout << "X: ";
    cin >> pontoBx;
    cout << "Y: ";
    cin >> pontoBy;

    resultado = sqrt(pow(pontoAx - pontoBx, 2) + pow(pontoAy - pontoBy, 2));
    cout << "A distancia entre dois pontos é: " << resultado << " unid.";
    cin >> resultado;

    return 0;
}