#include "kolo.h"

Kolo::Kolo():m_hloubkaDezenu(MAX_DEZEN)
{

}

bool Kolo::cesta(int km)
{
    m_hloubkaDezenu-= ((MAX_DEZEN-MIN_DEZEN)/NAJEZD)*km;
    return (m_hloubkaDezenu>1.6);
}

float Kolo::hloubkaDezenu() const
{
    return m_hloubkaDezenu;
}
