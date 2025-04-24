// Calculaets Area of different shapes
#include<iostream>
using namespace std;

float const PI=3.14;

// Box
double CalcVolume(double length, double width, double height) {
    double area;
    area = length * width * height;
    return area;
}

// Sphere
double CalcVolume(double diameter) {
    double area, radius;
    radius = diameter/2;
    area = (4/static_cast<double>(3)*PI*radius*radius);
    return area;
}

// Cylinder
double CalcVolume(double diameter, double height) {
    double area, radius;
    radius=diameter/2;
    area = PI*radius*height;
    return area;
}

int main(){
    char choice;
    int length, width, height, diameter;

    cout << "Do you want to calculate volume of a box (B), a sphere (S), or a Cylinder (C)?\n";
    cout << "Enter B, S, or C to indicate your choice: \n";
    cin >> choice;

    // Box
    if (choice =='B' || choice=='b') {
        cout << "Enter length, width, and height of the Box: \n";
        cin >> length >> width >> height;
        cout << "Volume of the box is " <<CalcVolume(length, width, height) << " cubic liters.\n";
    }

    // Sphere
    else if (choice =='S' || choice == 's') {
        cout << "Enter the diameter of the sphere: \n";
        cin >> diameter;
        cout << "Volume of the sphere is " << CalcVolume(diameter) << " cubic liters.\n";
    }

    // Cylinder: \n
    else if (choice == 'C' || choice=='c') {
        cout << "Enter the diameter and height of the Cylinder: \n";
        cin >> diameter>>height;
        cout << "Volume of the Cylinder is " << CalcVolume(diameter,height) << " cubic liters.\n";
    }
    else
        cout << "Invalid Option!!!";

    return 0;
}
