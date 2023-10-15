#include <iostream>
using namespace std;
int main(){
	unsigned int saldo, opcion, retiro;
	cout<<"Ingrese saldo"<<endl;
	cin>>saldo;
	cout<<"Que quieres hacer\n"<<endl;
	cout<<"1.- Ver mi saldo\n2.- Retirar efectivo\n3.- Depositar fondos\n4.- Salir\n"<<endl;
	cin>>opcion;
	if(opcion<=4||opcion>=1){
		if(opcion==1){
			cout<<"Tu saldo es: "<<saldo;
		}
		if(opcion==2){
			cout<<"Cuanto deseas retirar?\n"<<endl;
			cin>>retiro;
			if(retiro<saldo){
				saldo=saldo-retiro;
				cout<<"Tu nuevo saldo es: "<<saldo;
			}
			else{
				cout<<"No cuentas con esa cantidad"<<endl;
			}
		}
		if(opcion==3){
			cout<<"Cuanto desea anadir?\n"<<endl;
			cin>>retiro;
			cout<<"Inserte la cantidad\n"<<endl;
			saldo=saldo+retiro;
			cout<<"Tu nuevo saldo es: "<<saldo;
		}
	}
	else{
		cout<<"Esa opcion no existe"<<endl;
	}
}
