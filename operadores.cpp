#include <iostream>
using namespace std;

int main() {
	// Introdu��o as vari�veis
    int a = 15;
    int b = 3;
    int c = 10;
    
    // Exemplo de uso do operador AND (&&)
    if (a < b && b < c) {
    	// Se A � maior que B, e, B maior que C, ent�o:
        cout << "A ordem é: a, b, c" << endl;
    }
    // Exemplo de uso do operador OR (||)
    if (a > b || b > c) {
    	// Se A � menor que B, ou, B menor que C, ent�o:
        cout << "Pelo menos uma das condições é verdadeira" << endl;
    }
    // Exemplo de uso do operador NOT (!!)
    if (!(a == b)) {
    	// Se A n�o � igual a B, ent�o:
        cout << "a é diferente de b" << endl;
    }
    return 0;
}
