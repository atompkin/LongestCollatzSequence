#ifndef RATIONAL_H
#define RATIONAL_H

class Rational
{
public:
    Rational(int n, int d);
    Rational plus(Rational other);
    Rational minus(Rational other);
    int getNum();
    int getDenom();
private:
    int num, denom;
};

#endif
