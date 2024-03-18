#include <iostream>

using namespace std;

int main() {
    int radius;
    int height;
    float pi = 3.14;

    cout << "Enter the radius of the Cylinder: ";
    cin >> radius;

    cout << "\nEnter the height of the Cylinder: ";
    cin >> height;

    float volume = pi * (radius * radius) * height;
    cout << "The volume of the cylinder is: " << volume << "\n";
}