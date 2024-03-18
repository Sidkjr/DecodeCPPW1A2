#include <iostream>

using namespace std;

int main() {

    char a;
    char b;
    int diff;

    cout << "Enter the first character: ";
    cin >> a;

    cout << "\nEnter the second character: ";
    cin >> b;

    diff = int(a) - int(b);

    cout << "\nThe difference between ASCII values of both characters is: " << diff << "\n";
}