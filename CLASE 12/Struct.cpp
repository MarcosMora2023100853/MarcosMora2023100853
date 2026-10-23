#include <iostream>
#include <string>

using namespace std;

struct Personaje {
    string nombre;
    int ataque;
};

int main() {
    Personaje heroe, villano;

    cout << "Heroe: ";
    cin >> heroe.nombre >> heroe.ataque;

    cout << "Villano: ";
    cin >> villano.nombre >> villano.ataque;

    if (heroe.ataque > villano.ataque)
        cout << "\n¡" << heroe.nombre << " es mas fuerte!\n";
    else if (villano.ataque > heroe.ataque)
        cout << "\n¡" << villano.nombre << " es mas fuerte!\n";
    else
        cout << "\n¡Empate!\n";

    return 0;
}
