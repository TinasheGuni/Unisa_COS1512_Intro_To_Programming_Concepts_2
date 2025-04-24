#include <iostream>
#include <string>
#include "Money.h"

using namespace std;

int main()
{
    Money m1;
    Money m2(15, 90);
    Money m3(5, 15);

    m1 = m2.Plus(m3);
    cout << m1 << " + " << m2 << " gives " << m1.Plus(m2) << endl;
    m1 = m2 + m3;
    cout << m2 << " + " << m3 << " gives " << m1 << endl;
    if (m2.GreaterThan(m1))
        cout << m2 << " is greater than " << m1 << endl;
    else
        cout << m2 << " is less than " << m1 << endl;

    return 0;
}
