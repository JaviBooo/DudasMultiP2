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

	LNear lista1=LNear();
	LNear lista2=LNear();

	int distancia1=0;
	int distancia2=2;
	for(unsigned int i=0;i<localidades.size();i++){
		if(i%2==0){
			lista1.insertaLocalidad(localidades[i], distancia1);
			distancia1=distancia1+2;
		}else{
			lista2.insertaLocalidad(localidades[i], distancia2);
			distancia2=distancia2+3;
		}
	}


	cout<<"*************Listas antes de la igualacion*************"<<endl;
	cout<<"Lista 1: "<<endl;
	cout<<lista1<<endl;

	cout<<"Lista 2: "<<endl;
	cout<<lista2<<endl;

	lista1=lista2;
	cout<<"*************Listas despues de la igualacion*************"<<endl;
	cout<<"Lista 1: "<<endl;
	cout<<lista1<<endl;

	cout<<"Lista 2: "<<endl;
	cout<<lista2<<endl;

	lista1.borraLocalidades(10);
	lista2.borraLocalidades(15);

	lista1.borraLocalidad(localidades[3].getNombre());
	lista2.borraLocalidad(localidades[4].getNombre());

	cout<<"*************Listas despues de los borrados*************"<<endl;
	cout<<"Lista 1: "<<endl;
	cout<<lista1<<endl;

	cout<<"Lista 2: "<<endl;
	cout<<lista2<<endl;

	return 0;
}