#include <iostream>
#include <stdlib.h>
using namespace std;

int main () {
    // Introduzir as variáveis
    double AC1, AC2, AF;
    cout << "Digite a sua nota da AC1 >>> ";
    cin >> AC1;
    cout << "Digite a sua nota da AC2 >>> ";
    cin >> AC2;
    cout << "Digite a sua nota da AF >>> ";
    cin >> AF;
    // Calcular a nota X a média da Facens
    double media = (AC1*1.5 + AC2*3.5 + AF*5);
    // A média dividida por 10
    media = (media / 10);
    
    // Interface do resultado do usuário
    cout << "A sua média no semestre foi: " << media << endl;
    if (media >= 5) {
        cout << "Parabéns! Você foi aprovado!" << endl;
    }
    else {
        cout << "Eita! Você foi reprovado!" << endl;
    }
    return 0;
}