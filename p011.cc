
#include "LNear.h"

int main(int argc, char * argv[])   //PRUEBA PARA NODOL Y LNEAR
{     
    cout << "------------------" << endl << "CONSTRUCTORES:" << endl;
    LNear l1 = LNear();
    LNear l2 = LNear();
    LNear l3 = LNear();

    cout << "l1: " << l1 << endl;
    cout << "l2: " << l2 << endl<< endl;

    Localidad lc1 = Localidad("a");
    Localidad lc2 = Localidad("b");
    Localidad lc3 = Localidad("c");
    Localidad lc4 = Localidad("d");

    cout << "------------------" << endl << "INSERTA EN L1:" << endl;

    l1.insertaLocalidad(lc1, 2);
    cout << "l1: " << l1<< endl;

    l1.insertaLocalidad(lc2, 1);
    cout << "l1: " << l1<< endl;

    l1.insertaLocalidad(lc3, 3);
    cout << "l1: " << l1<< endl;

    cout << "------------------" << endl << "OPERADOR = (l2 = l1):" << endl;

    l2 = l1;

    cout << "l1: " << l1<< endl;
    cout << "l2: " << l2<< endl;

    cout << "------------------" << endl << "INSERTA EN L2:" << endl;

    l2.insertaLocalidad(lc4, 8);

    cout << "l1: " << l1<< endl;
    cout << "l2: " << l2<< endl<< endl;

    cout << "------------------" << endl << "OPERADOR IGUAL (l1 = l2):" << endl;

    l1 = l2;

    cout << "l1: " << l1<< endl;
    cout << "l2: " << l2<< endl<< endl;

    cout << "------------------" << endl << "ES VACIA EN TODO:" << endl;

    cout << "l1: " << l1.esVacia() << endl;
    cout << "l2: " << l2.esVacia() << endl;
    cout << "l3: " << l3.esVacia() << endl << endl;

    l2.insertaLocalidad(lc2, 3);

    cout << "------------------" << endl << "RANGO EN TODO:" << endl;

    cout << "l1: " << l1.rango() << endl;
    cout << "l2: " << l2.rango() << endl;
    cout << "l3: " << l3.rango() << endl << endl;

    cout << "------------------" << endl << "borraLocalidad TODO:" << endl;

    cout << "l1: " << l1.borraLocalidad("a") << endl;
    cout << "l2: " << l2.borraLocalidad("b") << endl;
    cout << "l3: " << l3.borraLocalidad("a") << endl << endl;

    cout << "l1: " << l1 << endl;
    cout << "l2: " << l2 << endl;
    cout << "l3: " << l3 << endl << endl;

    cout << "l1: " << l1.borraLocalidad("b") << endl;
    cout << "l2: " << l2.borraLocalidad("z") << endl;
    cout << "l3: " << l3.borraLocalidad("d") << endl << endl;

    cout << "l1: " << l1 << endl;
    cout << "l2: " << l2 << endl;
    cout << "l3: " << l3 << endl << endl;

    cout << "------------------" << endl << "borraLocalidades TODO:" << endl;
    
    l1.borraLocalidades(3);
    l2.borraLocalidades(2);
    l3.borraLocalidades(6);

    cout << "l1: " << l1 << endl;
    cout << "l2: " << l2 << endl;
    cout << "l3: " << l3 << endl << endl;

    l1.borraLocalidades(0);
    l2.borraLocalidades(-4);
    l3.borraLocalidades(5);

    cout << "l1: " << l1 << endl;
    cout << "l2: " << l2 << endl;
    cout << "l3: " << l3 << endl << endl;

    cout << "------------------" << endl << "INSERTAMOS DE NUEVO TODO:" << endl;

    l1.insertaLocalidad(lc1,1);
    l1.insertaLocalidad(lc1,2);
    l1.insertaLocalidad(lc1,3);
    l1.insertaLocalidad(lc1,1);
    l1.insertaLocalidad(lc1,-4);
    l1.insertaLocalidad(lc1,-3);
    l1.insertaLocalidad(lc1,6);
    l1.insertaLocalidad(lc1,0);

    cout << "l1: " << l1 << endl;
    cout << "l2: " << l2 << endl;
    cout << "l3: " << l3 << endl << endl;

    l2.insertaLocalidad(lc1,3);
    l2.insertaLocalidad(lc3,3);
    l2.insertaLocalidad(lc4,3);
    l2.insertaLocalidad(lc2,3);

    cout << "l1: " << l1 << endl;
    cout << "l2: " << l2 << endl;
    cout << "l3: " << l3 << endl << endl;

    l3.insertaLocalidad(lc3, 3);
    l3.insertaLocalidad(lc2, 4);
    l3.insertaLocalidad(lc3, 1);
    l3.insertaLocalidad(lc2, 2);
    l3.insertaLocalidad(lc2, 4);
    l3.insertaLocalidad(lc4, 1);
    l3.insertaLocalidad(lc2, 6);
    l3.insertaLocalidad(lc1, 2);
    l3.insertaLocalidad(lc2, 1);
    l3.insertaLocalidad(lc3, 4);

    cout << "l1: " << l1 << endl;
    cout << "l2: " << l2 << endl;
    cout << "l3: " << l3 << endl << endl;

    cout << "------------------" << endl << "GETLOCALIDAD TODO:" << endl;

    cout << endl << "l1: " << endl;

    for(int i = 0; i < 8 ; i++)
        cout << l1.getLocalidad(i);

    cout << endl << "l2: " << endl;

    for(int i = -3; i < 4 ; i++)
        cout << l2.getLocalidad(i);

    cout << endl << "l3: " << endl;

    for(int i = -1; i < 10 ; i++)
        cout << l3.getLocalidad(i);

    cout << endl << endl;
}