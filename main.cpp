#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double pi = 3.14159;
    double radius = 0;

    cout << "Enter the radius of your circle: ";
    cin >> radius;

    double result = pi*( pow(radius, 2));
    cout << "The area of your circle is: " << result;
    return 0;
}
