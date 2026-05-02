#include <iostream>
using namespace std;

int main() {
    int choice;
    float radius, side, length, width, area;

    cout << "Choose shape to find area:\n";
    cout << "1. Circle\n";
    cout << "2. Square\n";
    cout << "3. Rectangle\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter radius of circle: ";
            cin >> radius;
            area = 3.14 * radius * radius;
            cout << "Area of Circle = " << area;
            break;

        case 2:
            cout << "Enter side of square: ";
            cin >> side;
            area = side * side;
            cout << "Area of Square = " << area;
            break;

        case 3:
            cout << "Enter length and width of rectangle: ";
            cin >> length >> width;
            area = length * width;
            cout << "Area of Rectangle = " << area;
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}