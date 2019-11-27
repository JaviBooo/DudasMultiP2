#include <vector>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include "Provincia.h"

static void modifica(LNear listita){//volver a compilar y pasar la prueba

	Localidad loc1=Localidad("Insertada1");
	Localidad loc2=Localidad("Insertada2");

	listita.insertaLocalidad(loc1, 20);
	listita.insertaLocalidad(loc2, 5);

	listita.borraLocalidad("Insertada1");
	listita.borraLocalidades(40);

	cout<<"Lista despues de mandarla a modificar:"<<endl;
	cout<<listita<<endl;
}

int main(int argc, char *argv[]){

	Coleccion colec=Coleccion();
	string fichero=argv[1];
	colec.lectura(fichero);
	vector <Localidad> localidades=colec.getLocalidades();

	LNear lista=LNear();
	int distancia=2;
	for(unsigned int i=0;i<localidades.size();i++){
		lista.insertaLocalidad(localidades[i], distancia);
		if(i%2==0){
			distancia=distancia*2;
		}else{
			distancia=distancia*(3);
		}
	}

	cout<<"Lista antes de mandarla a modificar:"<<endl;
	cout<<lista<<endl;

	modifica(lista);
	
	lista.borraLocalidad(localidades[0].getNombre());

	cout<<"Lista despues de borrar una localidad directamente:"<<endl;
	cout<<lista;

	return 0;
}