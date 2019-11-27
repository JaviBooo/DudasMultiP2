#include <vector>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include "Provincia.h"

int main(int argc, char *argv[]){

	Coleccion colec=Coleccion();
	string fichero=argv[1];
	colec.lectura(fichero);
	vector <Localidad> localidades=colec.getLocalidades();

	Provincia provincia=Provincia(localidades[0]);
	provincia.calculaCercanas(colec,10000);

	LNear locCercanas=provincia.getCercanas();
	cout<<"Localidades cercanas: "<<endl;
	cout<<locCercanas<<endl;

	locCercanas.borraLocalidades(20);
	cout<<"Localidades cercanas despues de borrar algunas: "<<endl;
	cout<<locCercanas<<endl;
	locCercanas.borraLocalidades(5);
	cout<<"Localidades cercanas despues de borrar algunas otra vez: "<<endl;
	cout<<locCercanas<<endl;

	cout<<"¿Es vacia la lista? -> ";
	if(locCercanas.esVacia()){
		cout<<"Si"<<endl;
	}else{
		cout<<"No"<<endl;
	}

	

	return 0;
}