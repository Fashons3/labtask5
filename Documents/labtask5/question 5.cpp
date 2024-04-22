#include<iostream>

using namespace std;

void triangle(int base, int height);
void square(int length);
void rectangle(int width, int length);

int main() {
    while (true) {
        int choice;
        cout << "Please select area of shape to calculate:\n";
        cout << "1. Square\n";
        cout << "2. Rectangle\n";
        cout << "3. Triangle\n";
        cout << "4. Exit\n";
        cout << "Enter selection: ";
        cin >> choice;

        if (choice == 1) {
            int length;
            cout << "Enter length: ";
            cin >> length;
            square(length);
        } else if (choice == 2) {
            int length, width;
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter width: ";
            cin >> width;
            rectangle(width, length);
        } else if (choice == 3) {
            int base, height;
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter height: ";
            cin >> height;
            triangle(base, height);
        } else if (choice == 4) {
            break;
        } else {
            cout << "Your inputVar was " << choice << " which is invalid.\n";
            cout << "Please enter a valid inputVar!\n";
        }
    }
    return 0;
}

void triangle(int base, int height) {
    cout << "Area of the triangle is: " << 0.5 * base * height << "\n";
}

void square(int length) {
    cout << "Area of the square is: " << length * length << "\n";
}

void rectangle(int width, int length) {
    cout << "Area of the rectangle is: " << width * length << "\n";
}
