#include <cstdlib>
#include <iostream>
using namespace std;
int main(){
	const int centinela = -1;
	float nota, contador = 0, suma = 0;
	cout<< "Introdusca la siguiente nota -1 centinela: ";
	cin>> nota;
	while ( nota != centinela){
		contador++;
		suma += nota;
		cout << "Introdusca la siguiente nota: -1 centinela: ";
		cin>> nota;
} //fin del while
	if (contador > 0)
		cout << "media = " << suma / contador << endl;
	else
		cout << " no Hay notas ";
		system("PAUSE");
		return EXIT_SUCCESS;
}
