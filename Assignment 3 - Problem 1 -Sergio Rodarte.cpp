#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Display welcome message
    cout << "****** Welcome to the Car Rental Cost Estimator ******" << endl;

    // Declare variables
    int rentalDays;
    double dailyRate, insurancePerDay, milesDriven, mileageAllowance, overMileageCharge;

    // User input
    cout << "Enter number of rental days: ";
    cin >> rentalDays;
    cout << "Enter daily rental rate ($): ";
    cin >> dailyRate;
    cout << "Enter insurance per day ($): ";
    cin >> insurancePerDay;
    cout << "Enter total miles driven: ";
    cin >> milesDriven;
    cout << "Enter mileage allowance per day: ";
    cin >> mileageAllowance;
    cout << "Enter over-mileage charge per mile ($): ";
    cin >> overMileageCharge;

    // Calculations
    double baseCost = rentalDays * dailyRate;
    double insuranceCost = rentalDays * insurancePerDay;
    double mileageLimit = rentalDays * mileageAllowance;
    double excessMiles = (milesDriven > mileageLimit) ? (milesDriven - mileageLimit) : 0;
    double overageFee = excessMiles * overMileageCharge;
    double totalCost = baseCost + insuranceCost + overageFee;

    // Display formatted invoice
    cout << fixed << showpoint << setprecision(2);
    cout << "\n============ CAR RENTAL INVOICE ============\n";

    cout << "Rental Days: " << rentalDays << endl;
    cout << "Daily Rate: $" << dailyRate << endl;
    cout << "Insurance per Day: $" << insurancePerDay << endl;
    cout << "--------------------------------------------" << endl;

    cout << setw(25) << setfill('.') << left << "Base Cost:"
        << "$" << baseCost << endl;
    cout << setw(25) << setfill('.') << left << "Insurance Cost:"
        << "$" << insuranceCost << endl;
    cout << setw(25) << setfill('.') << left << "Mileage Limit:"
        << mileageLimit << " miles" << endl;
    cout << setw(25) << setfill('.') << left << "Miles Driven:"
        << milesDriven << " miles" << endl;
    cout << setw(25) << setfill('.') << left << "Excess Miles:"
        << excessMiles << " miles" << endl;
    cout << setw(25) << setfill('.') << left << "Overage Fee:"
        << "$" << overageFee << endl;
    cout << "--------------------------------------------" << endl;
    cout << setw(25) << setfill('.') << left << "Total Cost:"
        << "$" << totalCost << endl;
    cout << "============================================" << endl;

    cout << "Thank you for choosing our rental service!" << endl;

    return 0;
}