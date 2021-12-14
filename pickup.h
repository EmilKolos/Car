#ifndef PICKUP_H
#define PICKUP_H
#include <string>
#include "vozidlo.h"

class Pickup : public Vozidlo
{
public:
    Pickup(std::string nazev);
    int nakladovyProstor() const;
    void setNakladovyProstor(int newNakladovyProstor);
    void info();

protected:
    int m_nakladovyProstor = 0;
};

#endif // PICKUP_H
