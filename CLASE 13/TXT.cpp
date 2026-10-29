#include <fstream>
#include <string>
using namespace std;
int main() {
	
	ifstream archivo("personaje.txt");
	
	if (!archivo.is_open()) {
	cout << "Error: El archivo no existe o no se pudo abrir." << endl;
	return 1;
	}
	string linea;
	cout << "=== Lista de personajes Guardados ===" << endl;
	
	while (getline(archivo, linea)) {
		cout << "- " << linea << endl:
	}
	archivo.close();
	return 0;
}
