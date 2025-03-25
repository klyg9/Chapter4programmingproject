#include <iostream>
#include <iomanip>

using namespace std;

double getRate(double weight) {
    if (weight <= 2) return 1.10;
    else if (weight <= 6) return 2.20;
    else if (weight <= 10) return 3.70;
    else return 4.80;
}

int main() {
    double weight, distance;

    // Get weight input with validation
    do {
        cout << "Enter the weight of the package (kg): ";
        cin >> weight;
        if (weight <= 0 || weight > 20) {
            cout << "Invalid weight. Must be between 0 and 20 kg." << endl;
        }
    } while (weight <= 0 || weight > 20);

    // Get distance input with validation
    do {
        cout << "Enter the shipping distance (miles): ";
        cin >> distance;
        if (distance < 10 || distance > 3000) {
            cout << "Invalid distance. Must be between 10 and 3000 miles." << endl;
        }
    } while (distance < 10 || distance > 3000);

    // Calculate charges
    double rate = getRate(weight);
    double charge = rate * (distance / 500);

    // Display the shipping charge
    cout << fixed << setprecision(2);
    cout << "Shipping charge: $" << charge << endl;

    return 0;
}