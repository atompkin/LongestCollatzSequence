#include "rational.h"

/*
a/b + c/d = (a*d + b*c) / (b*d)
a/b - c/d = (a*d - b*c) / (b*d)
(a/b) * (c/d) = (a*c) / (b*d)
(a/b) / (c/d) = (a*d) / (c*b)
-(a/b) = (-a/b)
(a/b) < (c/d) means (a*d) < (c*b)
(a/b) == (c/d) means (a*d) == (c*b)
*/

Rational::Rational(int n, int d)
{
    num = n;
    denom = d;
}

Rational Rational::plus(Rational other)
{
    // a/b + c/d = (a*d + b*c) / (b*d)
    int a = num;
    int b = denom;
    int c = other.getNum();
    int d = other.getDenom();
    int new_num = a*d + b*c;
    int new_denom = b*d;
    return Rational(new_num, new_denom);
}
Rational Rational::minus(Rational other)
{
    // a/b - c/d = (a*d - b*c) / (b*d)
    int a = num;
    int b = denom;
    int c = other.getNum();
    int d = other.getDenom();
    int new_num = a*d - b*c;
    int new_denom = b*d;
    return Rational(new_num, new_denom);
}

int Rational::getNum()
{
    return num;
}

int Rational::getDenom()
{
    return denom;
}
