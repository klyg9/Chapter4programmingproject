#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.14159;

int main() {
    int choice;
    double a, b;

    do {
        cout << "\nGeometry Calculator\n";
        cout << "1. Calculate the Area of a Circle\n";
        cout << "2. Calculate the Area of a Rectangle\n";
        cout << "3. Calculate the Area of a Triangle\n";
        cout << "4. Quit\n";
        cout << "Enter your choice (1–4): ";
        cin >> choice;

        if (choice < 1 || choice > 4) {
            cout << "Invalid choice. Please enter a number between 1 and 4.\n";
            continue;
        }

        if (choice == 4) break;

        do {
            cout << "Enter dimensions: ";
            cin >> a;
            if (choice != 1) cin >> b;
            if (a < 0 || (choice != 1 && b < 0))
                cout << "Invalid input. Dimensions must be non-negative.\n";
        } while (a < 0 || (choice != 1 && b < 0));

        double area = (choice == 1) ? PI * a * a : (choice == 2) ? a * b : 0.5 * a * b;
        cout << "Area: " << fixed << setprecision(2) << area << "\n";

    } while (true);

    cout << "Goodbye!\n";
    return 0;
}
