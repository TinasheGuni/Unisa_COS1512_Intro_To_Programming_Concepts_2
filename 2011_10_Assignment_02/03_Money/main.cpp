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
    cout <<  m1 <<

    return 0;
}
