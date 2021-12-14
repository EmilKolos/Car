#ifndef KOLO_H
#define KOLO_H

#define MIN_DEZEN (1.6)
#define MAX_DEZEN (10)
#define NAJEZD (10000)

class Kolo
{
public:
    Kolo();

    bool cesta(int km);
    float hloubkaDezenu() const;

protected:
    float m_hloubkaDezenu;
};

#endif // KOLO_H
