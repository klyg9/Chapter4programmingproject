#include <iostream>

using namespace std;

bool isLeapYear(int year) {
    if (year % 100 == 0) {
        return (year % 400 == 0);
    } else {
        return (year % 4 == 0);
    }
}

int getDaysInMonth(int month, int year) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return -1; // Invalid month
    }
}

int main() {
    int month, year;

    // Get user input with validation
    do {
        cout << "Enter a month (1–12): ";
        cin >> month;
        if (month < 1 || month > 12) {
            cout << "Invalid month. Please enter a number between 1 and 12." << endl;
        }
    } while (month < 1 || month > 12);

    cout << "Enter a year: ";
    cin >> year;

    // Get and display the number of days in the given month/year
    int days = getDaysInMonth(month, year);
    cout << days << " days" << endl;

    return 0;
}
