#include <iostream>

using namespace std;

int main(){

  int dia;
 // Solicitar al usuario que ingrese un numero
 cout <<"Elige un numero del 1 al 7:" ;
 cin >> dia;
 // Dependiendo de lo que elijan les aparecera el dia
 	if (dia == 1){
 	cout<<"Domingo\n";
 	}else if (dia == 2){
 	 cout<<"Lunes\n";
 	}else if (dia == 3){
 	 cout<<"Martes\n";
 	}else if (dia == 4){
 	 cout<<"Miercoles\n";
 	}else if (dia == 5){
 	 cout<<"Jueves\n";
 	}else if (dia == 6){
 	 cout<<"Viernes\n";
 	}else if (dia == 7){
 	 cout<<"Sabado\n";
 	}else {
 		cout<<"El numero ingresado es incorrecto";//Si ingresan un numero diferente del 1 al 7, le saldra este error
	 }
	 return 0;
 }
