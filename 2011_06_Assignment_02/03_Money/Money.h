#ifndef MONEY_H
#define MONEY_H

#include <iostream>

using namespace std;

class Money
{
    public:
        friend ostream &operator<<(ostream &sout, const Money &r);
        friend bool operator > (const Money m1, const Money m2);
        Money();
        Money(int r, int c);
        ~Money();
        int theRands() const;
        int theCents() const;
        Money Plus(Money m);
        Money operator+ (Money &m);
        bool GreaterThan(const Money m) const;

    private:
        int rands;
        int cents;
};

#endif // MONEY_H
