#include <iostream>
using namespace std;
int main(){
	unsigned int saldo, opcion, retiro, ncuenta, nip, intentocuenta, intentonip;
	bool opcion2;
	ncuenta=1234;
	nip=1432;
	saldo=1500;
	opcion=4;
	do{
		do{
			cout<<"\tBienvenido a su banco de preferencia\nIngrese su numero de cuenta: "<<endl;
			cin>>intentocuenta;
			cout<<"Ingrese su nip"<<endl;
			cin>>intentonip;
			system("cls");
		}
		while(intentocuenta!=ncuenta||intentonip!=nip);
		do{
			opcion2=0;
			cout<<"Que quieres hacer\n"<<endl;
			cout<<"1.- Ver mi saldo\n2.- Retirar efectivo\n3.- Depositar fondos\n4.- Salir\n"<<endl;
			cin>>opcion;
			system("cls");
			if(opcion<=4||opcion>=1){
				if(opcion==1){
					cout<<"Tu saldo es: "<<saldo;
					cout<<"\n\nPulse 1 para salir"<<endl;
					cin>>opcion2;
					system("cls");
				}
				if(opcion==2){
					cout<<"Cuanto deseas retirar?\n"<<endl;
					cin>>retiro;
					system("cls");
					if(retiro<saldo){
						saldo=saldo-retiro;
						cout<<"Tu nuevo saldo es: "<<saldo<<"\n";
						cout<<"\n\nPulse 1 para salir"<<endl;
						cin>>opcion2;
						system("cls");
					}
					else{
						cout<<"No cuentas con esa cantidad\n"<<endl;
						cout<<"\n\nPulse 1 para salir"<<endl;
						cin>>opcion2;
						system("cls");
					}
				}
				if(opcion==3){
					cout<<"Cuanto desea anadir?\n"<<endl;
					cin>>retiro;
					system("cls");
					cout<<"Inserte la cantidad\n"<<endl;
					saldo=saldo+retiro;
					cout<<"Tu nuevo saldo es: "<<saldo;
					cout<<"\n\nPulse 1 para salir"<<endl;
					cin>>opcion2;
					system("cls");
				}
			}
		}
		while(opcion2==1);
	}
	while(opcion==4);
}
