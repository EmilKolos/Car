#include "benzinka.h"

Benzinka::Benzinka():m_rezervoarPaliva(10000)
{

}

float Benzinka::nacepuj(float pozadavek)
{
    if(m_rezervoarPaliva >= pozadavek){
        m_rezervoarPaliva-=pozadavek;
    }else{
        pozadavek=m_rezervoarPaliva;
        m_rezervoarPaliva=0;
    }
    return pozadavek;
}

double Benzinka::rezervoarPaliva() const
{
    return m_rezervoarPaliva;
}

void Benzinka::setRezervoarPaliva(double newRezervoarPaliva)
{
    m_rezervoarPaliva = newRezervoarPaliva;
}
