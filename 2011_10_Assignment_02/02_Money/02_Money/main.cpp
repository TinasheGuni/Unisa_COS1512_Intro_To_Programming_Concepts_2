#include <iostream>

using namespace std;

class Money
{
public:
    friend ostream &operator <<(ostream &sout, const Money &r);
    friend bool operator > (const Money m1, const Money m2);
    Money();
    Money(int r, int c);
    ~Money();
    int theRands() const;
    int theCents() const;
    Money Plus(Money m);
    Money operator+ (Money & m);
    bool GreaterThan(const Money m) const;

private:
    int rands;
    int cents;
};

Money::Money()
{
    rands = 0;
    cents = 0;
}

Money::Money(int r, int c)
{
    rands = r;
    cents = c;
}

Money::~Money()
{
}

int Money::theRands() const
{
    return rands;
}

int Money::theCents() const
{
    return cents;
}

Money Money::Plus(Money m)
{
    Money temp;
    int c;
    c = (cents + m.cents) + (100 * (rands + m.rands));
    temp.rands = c / 100;
    temp.cents = c % 100;
    return temp;
}

Money Money::operator+(Money& m)
{
    Money temp;
    int c;
    c = (cents + m.cents) + (100 * (rands + m.rands));
    temp.rands = c / 100;
    temp.cents = c % 100;
    return temp;
}

bool Money::GreaterThan(const Money m) const
{
    return ((100*rands + cents) > (100*m.theRands() + m.theCents()));
}

int main()
{
    Money m1;
    return 0;
}
