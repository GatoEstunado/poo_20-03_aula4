#include <iostream>
using namespace std;

int main() {
	// Introduzir as variáveis
    int num1 = 10, num2 = 4;
    int soma, multi, divi, modulo, subt;
    
    // Exemplo de adição (+)
    soma = num1 + num2;
    // Exemplo de multiplicação (*)
    multi = num1 * num2;
    // Exemplo de divisão (/)
    divi= num1 / num2;
    // Exemplo de módulo (%)
    modulo = num1 % num2;
    // Exemplo de subtração (-)
    subt = num1 - num2;
    
    // Interface do usuário
    cout<<soma<<endl;
    cout<<multi<<endl;
    cout<<divi<<endl;
    cout<<modulo<<endl;
    cout<<subt<<endl;
    
    return 0;
}
