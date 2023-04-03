#include <iostream>
using namespace std;

int main() {
	// Introdução as variáveis
    int a = 15;
    int b = 3;
    int c = 10;
    
    // Exemplo de uso do operador AND (&&)
    if (a < b && b < c) {
    	// Se A é maior que B, e, B maior que C, então:
        cout << "A ordem e: a, b, c" << endl;
    }
    // Exemplo de uso do operador OR (||)
    if (a > b || b > c) {
    	// Se A é menor que B, ou, B menor que C, então:
        cout << "Pelo menos uma das condicoes sao verdadeira" << endl;
    }
    // Exemplo de uso do operador NOT (!!)
    if (!(a == b)) {
    	// Se A não é igual a B, então:
        cout << "a e diferente de b" << endl;
    }
    return 0;
}
