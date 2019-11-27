#include <vector>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include "Provincia.h"

int main(int argc, char *argv[]){

	Coleccion colec=Coleccion();
	string fichero=argv[1];
	colec.lectura(fichero);
	vector<Localidad> localidades= colec.getLocalidades();
	vector<Provincia> provincias;

	for(unsigned int i=0;i<localidades.size();i++){
		Provincia prov=Provincia(localidades[i]);
		provincias.push_back(prov);
	}

	for(unsigned int i=0;i<provincias.size();i++){
		provincias[i].calculaCercanas(colec,100000);

		cout<<"Provincia numero: "<<i<<endl;
		cout<<provincias[i].getCostera(colec)<<endl;
		cout<<provincias[i].getCercanas()<<endl;
	}

	return 0;
}