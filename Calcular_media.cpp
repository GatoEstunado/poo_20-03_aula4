#include <iostream>
#include <stdlib.h>
using namespace std;

int main () {
    // Introduzir as vari�veis
    double nota1, nota2, nota3, nota4;
    // Interface do usu�rio e leitura do sistema
    cout << "Digite a sua primeira nota do bimestre >>> ";
    cin >> nota1;
    cout << "Digite a sua segunda nota do bimestre >>> ";
    cin >> nota2;
    cout << "Digite a sua terceira nota do bimestre >>> ";
    cin >> nota3;
    cout << "Digite a sua quarta nota do bimestre >>> ";
    cin >> nota4;
    
    // Realizar as somas
    double soma = (nota1 + nota2 + nota3 + nota4);
    soma = (soma / 4);
    
    // Interface de conclus�o do usu�rio
    cout << "A sua média no semestre foi: " << soma << endl;
    if (soma >= 7) {
        cout << "Parabéns! Você foi aprovado!" << endl;
    }
    else {
        cout << "Eita! Você foi reprovado!" << endl;
    }
    return 0;
}
