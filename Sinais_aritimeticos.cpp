#include <iostream>
using namespace std;

int main() {
	// Introduzir as vari�veis
    int num1 = 10, num2 = 4;
    int soma, multi, divi, modulo, subt;
    
    // Exemplo de adi��o (+)
    soma = num1 + num2;
    // Exemplo de multiplica��o (*)
    multi = num1 * num2;
    // Exemplo de divis�o (/)
    divi= num1 / num2;
    // Exemplo de m�dulo (%)
    modulo = num1 % num2;
    // Exemplo de subtra��o (-)
    subt = num1 - num2;
    
    // Interface do usu�rio
    cout<<soma<<endl;
    cout<<multi<<endl;
    cout<<divi<<endl;
    cout<<modulo<<endl;
    cout<<subt<<endl;
    
    return 0;
}
