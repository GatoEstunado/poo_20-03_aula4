#include <iostream>
#include <stdlib.h>
using namespace std;

int main () {
    // Introduzir as variáveis
    double nota1, nota2, nota3, nota4;
    char continuar = 's';
    
    // Iniciar o 'while' para que possa repetir
    while (continuar == 's' || continuar == 'S') {
        
    // Interface do usuário e leitura do sistema
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
    
    // Interface de conclusão do usuário
    // 'Switch' para organizar e possibilitar outras opções
    switch ((int)soma) {
        // Se for igual ou maior que 7
        case 10:
        case 9:
        case 8:
        case 7:
             cout << "Parabens! Voce foi aprovado!" << endl;
             break;
        
        // Se for igual ou maior que 5 e menor que 7
        case 6:
        case 5:
             cout << "Voce devera fazer uma prova substitutiva." << endl;
             break;
        
        // Se for menor que 5
        default:
             cout << "Infelizmente voce foi reprovado..." << endl;
             break;
    }
    // Finalização do 'while' para que o programa se repita
    cout << "Deseja realizar outra media? (s/n)" << endl;
    cin >> continuar;
    }
    return 0;
}
