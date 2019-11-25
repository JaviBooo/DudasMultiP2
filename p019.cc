
#include "Provincia.h"

int main(int argc, char* argv[])    //PRUEBA PARA PROVINCIA
{
    Coleccion c = Coleccion();

    string s = argv[1];
    c.lectura(s);

    for(int i = 0; i < (int)c.getMapa().size(); i++)
    {
        for(int j = 0; j < (int)c.getMapa()[i].size(); j++)
        {
            cout << c.getMapa()[i][j];
        }
        cout << endl;
    }

    for(int i = 0; i < (int)c.getLocalidades().size(); i++)
        cout << c.getLocalidades()[i] << endl;

    cout << "------------------" << endl << "CONSTRUCTORES: " << endl;

    Provincia p1 = Provincia(c.getLocalidades()[0]);
    Provincia p2 = Provincia(c.getLocalidades()[1]);
    Provincia p3 = Provincia(c.getLocalidades()[2]);

    cout << "p1: " << p1 << endl;
    cout << "p2: " << p2 << endl;
    cout << "p3: " << p3 << endl << endl;


    p3 = Provincia(p2);
    p2 = Provincia(p1);

    cout << "p1: " << p1 << endl;
    cout << "p2: " << p2 << endl;
    cout << "p3: " << p3 << endl << endl;

    p1 = p3;

    cout << "p1: " << p1 << endl;
    cout << "p2: " << p2 << endl;
    cout << "p3: " << p3 << endl << endl;


    cout << "------------------" << endl << "CALCULA CERCANAS: " << endl;

    p1.calculaCercanas(c, 1);
    p2.calculaCercanas(c, 10000);
    p3.calculaCercanas(c, -4);

    cout << "p1: " << p1 << endl;
    cout << "p2: " << p2 << endl;
    cout << "p3: " << p3 << endl << endl;

    p1.calculaCercanas(c, 10);
    p2.calculaCercanas(c, 0);
    p3.calculaCercanas(c, 7);

    cout << "p1: " << p1 << endl;
    cout << "p2: " << p2 << endl;
    cout << "p3: " << p3 << endl << endl;

    p2.calculaCercanas(c, 1000);

    cout << "p1: " << p1 << endl;
    cout << "p2: " << p2 << endl;
    cout << "p3: " << p3 << endl << endl;


    cout << "------------------" << endl << "BORRA LOCALIDAD: " << endl;

    p1.borraLocalidad("a");
    p2.borraLocalidad("");
    p3.borraLocalidad("Fetiche");

    cout << "p1: " << p1 << endl;
    cout << "p2: " << p2 << endl;
    cout << "p3: " << p3 << endl << endl;

    p1.borraLocalidad("Cocidico Weno");
    p2.borraLocalidad("d");
    p3.borraLocalidad("Ja Ja");

    cout << "p1: " << p1 << endl;
    cout << "p2: " << p2 << endl;
    cout << "p3: " << p3 << endl << endl;


    cout << "------------------" << endl << "GET CERCANAS: " << endl;

    cout << "p1: " << p1.getCercanas() << endl;
    cout << "p2: " << p2.getCercanas() << endl;
    cout << "p3: " << p3.getCercanas() << endl << endl;


    cout << "------------------" << endl << "GET COSTERA: " << endl;

    cout << "p1: " << p1.getCostera(c) << endl;
    cout << "p2: " << p2.getCostera(c) << endl;
    cout << "p3: " << p3.getCostera(c) << endl << endl;


    cout << "------------------" << endl << "GET COSTERAS: " << endl;

    cout << "p1: " << p1.getCosteras(c) << endl;
    cout << "p2: " << p2.getCosteras(c) << endl;
    cout << "p3: " << p3.getCosteras(c) << endl << endl;


    cout << "------------------" << endl << "GET CON AEROPUERTO: " << endl;

    cout << "p1: " << p1.getConAeropuerto() << endl;
    cout << "p2: " << p2.getConAeropuerto() << endl;
    cout << "p3: " << p3.getConAeropuerto() << endl << endl;


}