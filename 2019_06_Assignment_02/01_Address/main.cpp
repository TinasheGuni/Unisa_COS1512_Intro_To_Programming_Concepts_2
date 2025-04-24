// This program shows how to use a class
#include <iostream>
#include <string>

using namespace std;

class Address {
public:
    void input();
    void output();
    void set (string streetName1, string streetName2, int streetNumber, int postalCode, string city);

private:
    string name1, name2;
    string cityName;
    int number, code;
};

int main()
{
    Address address;
    cout << "\tAddress\n\n";
    address.input();

    cout << "\nThe Address is: \n";
    address.output();

    return 0;
}

void Address::input() {
    cout << "Enter Street Name: \n";
    cin >>name1>>name2;
    cout << "Enter Street Number: \n";
    cin >> number;
    cout << "Enter city name: \n";
    cin >> cityName;
    cout << "Enter Postal code: \n";
    cin >> code;
}

void Address::output() {
    cout<< "Street Name\t: " << name1 << name2 << endl
        << "Street Number\t: " << number << endl
        << "City\t\t: " << cityName << endl
        << "Postal Code\t: " << code << endl;
}

void Address::set(string streetName, string streetName2, int streetNumber, int postalCode, string city) {
    name1 = streetName;
    name2 = streetName2;
    cityName = city;
    number = streetNumber;
    code = postalCode;

}
