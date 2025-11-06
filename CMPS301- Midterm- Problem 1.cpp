#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // Variables
    string customerName;
    int numItems;
    double pricePerItem, subtotal, discount = 0.0, memberDiscount = 0.0, finalTotal;
    char isMember;

    // Welcome message
    cout << "****** Welcome to the Tech Store Invoice Calculator ******" << endl;

    // User input
    cout << "Enter customer name: ";
    getline(cin, customerName);

    cout << "Enter number of items: ";
    cin >> numItems;

    cout << "Enter price per item: ";
    cin >> pricePerItem;

    cout << "Are you a store member (Y/N)? ";
    cin >> isMember;

    // Calculations
    subtotal = numItems * pricePerItem;

    // Apply purchase discount
    if (subtotal > 500)
        discount = subtotal * 0.10;
    else if (subtotal > 300)
        discount = subtotal * 0.05;

    double discountedTotal = subtotal - discount;

    // Membership discount (additional 5%)
    if (isMember == 'Y' || isMember == 'y')
        memberDiscount = discountedTotal * 0.05;

    finalTotal = discountedTotal - memberDiscount;

    // Output invoice
    cout << "============== PURCHASE INVOICE ==============" << endl;
    cout << left << setw(30) << setfill('.') << "Customer Name: " << customerName << endl;
    cout << left << setw(30) << setfill('.') << "Items Purchased: " << numItems << endl;
    cout << left << setw(30) << setfill('.') << "Price per Item: "
        << fixed << showpoint << setprecision(2) << "$" << pricePerItem << endl;
    cout << left << setw(30) << setfill('.') << "Subtotal: $" << subtotal << endl;

    // Show discounts
    if (discount > 0)
        cout << left << setw(30) << setfill('.') << "Discount Applied: "
        << fixed << setprecision(0) << (discount / subtotal) * 100 << "%" << endl;
    else
        cout << left << setw(30) << setfill('.') << "Discount Applied: " << "0%" << endl;

    if (isMember == 'Y' || isMember == 'y')
        cout << left << setw(30) << setfill('.') << "Membership Discount: " << "5%" << endl;
    else
        cout << left << setw(30) << setfill('.') << "Membership Discount: " << "0%" << endl;

    cout << "---------------------------------------------" << endl;
    cout << left << setw(30) << setfill('.') << "Final Total: $"
        << fixed << showpoint << setprecision(2) << finalTotal << endl;
    cout << "=============================================" << endl;
    cout << "Thank you for shopping with us!" << endl;

    return 0;
}