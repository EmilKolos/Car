#ifndef BENZINKA_H
#define BENZINKA_H


class Benzinka
{
public:
    Benzinka();

    float nacepuj(float pozadavek);

    double rezervoarPaliva() const;
    void setRezervoarPaliva(double newRezervoarPaliva);

protected:
    double m_rezervoarPaliva;

};

#endif // BENZINKA_H
