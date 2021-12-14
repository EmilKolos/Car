#include <iostream>
#include "vozidlo.h"
#include "pickup.h"

using namespace std;

int main()
{
    Vozidlo a("Trabant");
    a.info();
    a.cesta(100);
    a.info();

    Benzinka benzina;
    a.natankuj(benzina);
    a.info();

    Pickup p("Dacia");
    p.info();
    p.natankuj(benzina);
    p.info();
    cout << "Hello World!" << endl;
    return 0;
}
