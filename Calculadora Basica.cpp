#include <iostream>

using namespace std;

int main(){
	int num1, num2, opc, r;
	//Introduccion y solicitud de un numero pa la calculadora
	cout<<"Bienvenido a la Calculadora Basica\n";
	cout<<"1.Suma\n";
	cout<<"2.Resta\n";
	cout<<"3.Multiplicacion\n";
	cout<<"4.Division\n";
	cout<< "opc:" ;
	cin>>opc;
	//Suma
	if (opc == 1){
		cout<<"Ingrese el primer numero:\n";
		cin>>num1;
		cout<<"Ingrese el segundo numero:\n";
		cin>>num2;
		r=num1+num2;
		cout<<"Resultado de la operacion: "<<r<<endl;
		//Resta
	}else if (opc == 2){
		cout<<"Ingrese el primer numero:\n";
		cin>>num1;
		cout<<"Ingrese el segundo numero:\n";
		cin>>num2;
		cout<<"Resultado de la operacion: "<<num1-num2<<endl;
		//Multiplicacion
	}else if (opc == 3){
		cout<<"Ingrese el primer numero:\n";
		cin>>num1;
		cout<<"Ingrese el segundo numero:\n";
		cin>>num2;
		cout<<"Resultado de la operacion: "<<num1*num2<<endl;
		//Division
	}else if (opc == 4){
		cout<<"Ingrese el primer numero:\n";
		cin>>num1;
		cout<<"Ingrese el segundo numero:\n";
		cin>>num2;
		cout<<"Resultado de la operacion: "<<num1/num2<<endl;
	}else {
		cout<<"Error al seleccionar la opcion";
	}
	return 0;
}
