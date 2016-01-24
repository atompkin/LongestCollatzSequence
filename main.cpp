#include <iostream>
#include "rational.h"
using namespace std;

int main()
{
    Rational a(5, 2);
    Rational b(3, 7);

    cout << "Rational a = " << a.getNum() << "/" << a.getDenom() << endl;
    cout << "Rational b = " << b.getNum() << "/" << b.getDenom() << endl;

    Rational c = a.minus(b);
    Rational d = a.plus(b);

    cout << "Rational c = " << c.getNum() << "/" << c.getDenom() << endl;
    cout << "Rational d = " << d.getNum() << "/" << d.getDenom() << endl;
    
    return 0;
}
