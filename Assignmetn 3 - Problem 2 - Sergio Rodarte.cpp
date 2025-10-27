#include <iostream>
#include <iomanip>
#include <sstream>   // <-- add this
using namespace std;

int main() {
    cout << "****** Welcome to the Monthly Budget & Savings Planner ******" << endl;

    double income, rent, utilities, groceries, transportation, savingsPercent;

    cout << "Enter your monthly income ($): ";
    cin >> income;
    cout << "Enter your rent or mortgage cost ($): ";
    cin >> rent;
    cout << "Enter your utilities cost ($): ";
    cin >> utilities;
    cout << "Enter your groceries cost ($): ";
    cin >> groceries;
    cout << "Enter your transportation cost ($): ";
    cin >> transportation;
    cout << "Enter your desired savings goal (% of income): ";
    cin >> savingsPercent;

    double totalExpenses = rent + utilities + groceries + transportation;
    double savingsGoal = (savingsPercent / 100.0) * income;
    double remaining = income - totalExpenses - savingsGoal;

    // Build the dynamic label without to_string
    ostringstream label;
    label << "Savings Goal (" << static_cast<int>(savingsPercent) << "%):";

    cout << fixed << showpoint << setprecision(2);
    cout << "\n============== MONTHLY BUDGET REPORT ==============\n";
    cout << setw(30) << setfill('.') << left << "Monthly Income:" << "$" << income << "\n";
    cout << "----------------------------------------------------\n";
    cout << setw(30) << setfill('.') << left << "Rent / Mortgage:" << "$" << rent << "\n";
    cout << setw(30) << setfill('.') << left << "Utilities:" << "$" << utilities << "\n";
    cout << setw(30) << setfill('.') << left << "Groceries:" << "$" << groceries << "\n";
    cout << setw(30) << setfill('.') << left << "Transportation:" << "$" << transportation << "\n";
    cout << "----------------------------------------------------\n";
    cout << setw(30) << setfill('.') << left << "Total Expenses:" << "$" << totalExpenses << "\n";
    cout << setw(30) << setfill('.') << left << label.str() << "$" << savingsGoal << "\n";
    cout << setw(30) << setfill('.') << left << "Remaining Balance:" << "$" << remaining << "\n";
    cout << "====================================================\n";
    cout << "Smart planning leads to financial freedom!\n";

    return 0;
}