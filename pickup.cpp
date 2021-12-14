#include "pickup.h"
#include "iostream"


Pickup::Pickup(std:: string nazev): Vozidlo(" Pickup " + nazev)
{

}

int Pickup::nakladovyProstor() const
{
    return m_nakladovyProstor;
}

void Pickup::setNakladovyProstor(int newNakladovyProstor)
{
    m_nakladovyProstor = newNakladovyProstor;
}

void Pickup::info()
{
    Vozidlo::info();
    std::cout << "\tNakladovy prostor" << m_nakladovyProstor << "%" <<std::endl;
}
