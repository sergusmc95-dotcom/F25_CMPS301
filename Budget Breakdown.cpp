#include <iostream>
#include <string>
using namespace std;

int main() {
    // Variables
    double paycheck = 3500.00;        // Monthly paycheck
    double rent = 1200.00;
    double utilities = 250.00;
    double groceries = 400.00;
    double transportation = 300.00;
    double phoneBill = 90.00;
    double internet = 70.00;
    double entertainment = 200.00;
    double insurance = 250.00;
    double percentageToSave = 0.20;   // 20% of remaining balance

    // Calculations
    double totalExpenses = rent + utilities + groceries + transportation
        + phoneBill + internet + entertainment + insurance;
    double remainingBalance = paycheck - totalExpenses;
    double amountToSave = remainingBalance * percentageToSave;
    double finalSpendingMoney = remainingBalance - amountToSave;

    // Display Output
    cout << "=============================================\n";
    cout << "         Budget Breakdown - Life After Payday \n";
    cout << "=============================================\n";
    cout << "Paycheck:            $" << paycheck << endl;
    cout << "---------------------------------------------\n";
    cout << "Rent:                $" << rent << endl;
    cout << "Utilities:           $" << utilities << endl;
    cout << "Groceries:           $" << groceries << endl;
    cout << "Transportation:      $" << transportation << endl;
    cout << "Phone Bill:          $" << phoneBill << endl;
    cout << "Internet:            $" << internet << endl;
    cout << "Entertainment:       $" << entertainment << endl;
    cout << "Insurance:           $" << insurance << endl;
    cout << "---------------------------------------------\n";
    cout << "Total Expenses:      $" << totalExpenses << endl;
    cout << "Remaining Balance:   $" << remainingBalance << endl;
    cout << "Savings (20%):       $" << amountToSave << endl;
    cout << "Final Spending $:    $" << finalSpendingMoney << endl;
    cout << "=============================================\n";
    cout << "Tip: Stick to your budget today to enjoy a stress-free tomorrow!\n";

    return 0;
}