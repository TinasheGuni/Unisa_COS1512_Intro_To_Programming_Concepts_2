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

bool operator > (const Money m1, const Money m2)
{
    return ((100*m1.rands + m1.cents) > (100*m2.rands + m2.cents));
}

ostream &operator<<(ostream &sout, const Money &m)
{
    if (m.theCents() < 10)
        sout << "R" << m.theRands() << ".0" << m.theCents();
    else
        sout << "R" << m.theRands() << "." << m.theCents();
}

int main()
{
    Money m1;
    Money m2(15, 90);
    Money m3(5, 15);

    m1 = m2.Plus(m3);
    cout << m1 << " + " << m2 << " gives " << m1.Plus(m2) << endl;

    if (m2.GreaterThan(m1))
        cout << m2 << " is greater than " << m1 << endl;
    else
        cout << m2 << " is less than " << m1 << endl;

    return 0;
}
