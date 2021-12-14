#include "vozidlo.h"
#include <string>
#include <iostream>

Vozidlo::Vozidlo(string jmeno):m_jmeno(jmeno)
{
    m_levePredni=new Kolo;
    m_leveZadni=new Kolo;
    m_pravePredni=new Kolo;
    m_praveZadni=new Kolo;
    m_nadrz=10;
}

Vozidlo::~Vozidlo()
{
    delete m_levePredni;
    delete m_leveZadni;
    delete m_pravePredni;
    delete m_praveZadni;
}

void Vozidlo::natankuj(Benzinka &b)
{
    m_nadrz+=b.nacepuj(MAX_NADRZ-m_nadrz);
}

void Vozidlo::info()
{
    cout<<"Vozidlo"<<m_jmeno<<endl;
    cout<<"\tKola:"<<endl;
    cout<<"\t\tleve predni: "<<m_levePredni->hloubkaDezenu()<<endl;
    cout<<"\t\tleve zadni: "<<m_leveZadni->hloubkaDezenu()<<endl;
    cout<<"\t\tprave predni: "<<m_pravePredni->hloubkaDezenu()<<endl;
    cout<<"\t\tprave zadni: "<<m_praveZadni->hloubkaDezenu()<<endl;
    cout<<"\t\tnadrz: "<<m_nadrz<<endl;

}

bool Vozidlo::cesta(int km)
{
    float pozadavek=(SPOTREBA / 100)*km;
    if(m_nadrz >=pozadavek){
        m_levePredni->cesta(km);
        m_leveZadni->cesta(km);
        m_pravePredni->cesta(km);
        m_praveZadni->cesta(km);
        m_nadrz-=pozadavek;
        return true;
    }else{
        int trasa=m_nadrz/(SPOTREBA/100);
        m_levePredni->cesta(trasa);
        m_leveZadni->cesta(trasa);
        m_pravePredni->cesta(trasa);
        m_praveZadni->cesta(trasa);
        m_nadrz=0;
        return false;
    }
}
