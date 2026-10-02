#include <cstdlib>
#include <iostream>
using namespace std;
int main(){
	char car;
	bool digito_leido = false;
	while (!digito_leido){
		cout << "Introduzca un caracter digito para salir del bucle :"<<endl;
		cin >> car;
		digito_leido = (('0'<= car) && (car <='9'));
	}
	cout << car <<" es el digito leido" <<endl;
		system("PAUSE");
		return EXIT_SUCCESS;
}


