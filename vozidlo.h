#ifndef VOZIDLO_H
#define VOZIDLO_H

#include "kolo.h"
#include "benzinka.h"
#include <string>


#define SPOTREBA (5.6)
#define MAX_NADRZ (60)
using namespace std;

class Vozidlo
{
public:
    Vozidlo(string jmeno);
    ~Vozidlo();

    void natankuj(Benzinka &b);

    void info();
    bool cesta(int km);

protected:
    Kolo *m_levePredni;
    Kolo *m_leveZadni;
    Kolo *m_pravePredni;
    Kolo *m_praveZadni;

    string m_jmeno;
    float m_nadrz;
};

#endif // VOZIDLO_H
