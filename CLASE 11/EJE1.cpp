#include <iostream>

using namespace std; 

int main() {
    char c;
    
    cout << "Introduce caracteres hasta ingresar una vocal minúscula (a, e, i, o, u):\n";
    
    for (cin >> c; c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u'<<endl;) {
        cout << "No es una vocal minúscula. Intenta de nuevo: ";
    }
    
    cout << "\n¡Correcto! Ingresaste la vocal minúscula: " << c << endl;
    
    return 0;
}
