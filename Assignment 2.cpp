#include <iostream>
#include <string>
using namespace std;

int main() {
    // Welcome message
    cout << "****** Welcome to the Tech Store Purchase Invoice Generator ******" << endl;

    // Declare variables
    string item1, item2, accessory;
    double price1, price2, price3;
    double subtotal, tax, total;
    const double TAX_RATE = 0.095; // 9.5%

    // Input for first tech item
    cout << "Enter name of Tech Item #1: ";
    getline(cin, item1);
    cout << "Enter price: ";
    cin >> price1;
    cin.ignore();

    // Input for second tech item
    cout << "Enter name of Tech Item #2: ";
    getline(cin, item2);
    cout << "Enter price: ";
    cin >> price2;
    cin.ignore();

    // Input for accessory
    cout << "Enter name of Accessory: ";
    getline(cin, accessory);
    cout << "Enter price: ";
    cin >> price3;

    // Calculations
    subtotal = price1 + price2 + price3;
    tax = subtotal * TAX_RATE;
    total = subtotal + tax;

    // Display output
    cout << "\n=========== TECH STORE INVOICE ===========" << endl;
    cout << item1 << "\t$" << price1 << endl;
    cout << item2 << "\t$" << price2 << endl;
    cout << accessory << "\t$" << price3 << endl;
    cout << "------------------------------------------" << endl;
    cout << "Subtotal:\t$" << subtotal << endl;
    cout << "Sales Tax (9.5%):\t$" << tax << endl;
    cout << "Total:\t\t$" << total << endl;
    cout << "==========================================" << endl;
    cout << "Thank you for shopping with us!" << endl;

    return 0;
}