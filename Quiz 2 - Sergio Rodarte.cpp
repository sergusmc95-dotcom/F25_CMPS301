#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Welcome message
    cout << "****** Welcome to the Coffee Shop Order Calculator ******" << endl;

    // Declare variables
    int smallQty, mediumQty, largeQty;
    double taxRate;

    // Input from user
    cout << "Enter number of small coffees: ";
    cin >> smallQty;
    cout << "Enter number of medium coffees: ";
    cin >> mediumQty;
    cout << "Enter number of large coffees: ";
    cin >> largeQty;
    cout << "Enter tax rate (%): ";
    cin >> taxRate;

    // Coffee prices
    const double SMALL_PRICE = 2.25;
    const double MEDIUM_PRICE = 3.00;
    const double LARGE_PRICE = 3.75;

    // Calculations
    double smallCost = smallQty * SMALL_PRICE;
    double mediumCost = mediumQty * MEDIUM_PRICE;
    double largeCost = largeQty * LARGE_PRICE;
    double subtotal = smallCost + mediumCost + largeCost;
    double taxAmount = (taxRate / 100) * subtotal;
    double total = subtotal + taxAmount;

    // Formatting settings
    cout << fixed << showpoint << setprecision(2);

    // Receipt Output
    cout << "\n================= COFFEE ORDER RECEIPT =================" << endl;

    cout << setw(30) << setfill('.') << left
        << "Small Coffees (" << smallQty << " x $" << SMALL_PRICE << "):"
        << "$" << smallCost << endl;

    cout << setw(30) << setfill('.') << left
        << "Medium Coffees (" << mediumQty << " x $" << MEDIUM_PRICE << "):"
        << "$" << mediumCost << endl;

    cout << setw(30) << setfill('.') << left
        << "Large Coffees (" << largeQty << " x $" << LARGE_PRICE << "):"
        << "$" << largeCost << endl;

    cout << "--------------------------------------------------------" << endl;

    cout << setw(30) << setfill('.') << left << "Subtotal:"
        << "$" << subtotal << endl;

    cout << setw(30) << setfill('.') << left << "Tax (" << taxRate << "%):"
        << "$" << taxAmount << endl;

    cout << "--------------------------------------------------------" << endl;

    cout << setw(30) << setfill('.') << left << "Total Amount Due:"
        << "$" << total << endl;

    cout << "========================================================" << endl;
    cout << "Thank you for supporting local coffee!" << endl;

    return 0;
}
