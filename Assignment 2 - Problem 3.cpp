#include <iostream>
#include <string>
using namespace std;

int main() {
    // Welcome message
    cout << "****** Welcome to the Freelance Invoice Generator ******" << endl;

    // Declare variables
    string client1, client2, client3;
    double hours1, hours2, hours3;
    double rate1, rate2, rate3;
    double earn1, earn2, earn3, totalIncome;

    // Input for Client 1
    cout << "Client 1 Name: ";
    getline(cin, client1);
    cout << "Hours Worked: ";
    cin >> hours1;
    cout << "Hourly Rate: ";
    cin >> rate1;
    cin.ignore(); // clear input buffer

    // Input for Client 2
    cout << "Client 2 Name: ";
    getline(cin, client2);
    cout << "Hours Worked: ";
    cin >> hours2;
    cout << "Hourly Rate: ";
    cin >> rate2;
    cin.ignore();

    // Input for Client 3
    cout << "Client 3 Name: ";
    getline(cin, client3);
    cout << "Hours Worked: ";
    cin >> hours3;
    cout << "Hourly Rate: ";
    cin >> rate3;

    // Calculations
    earn1 = hours1 * rate1;
    earn2 = hours2 * rate2;
    earn3 = hours3 * rate3;
    totalIncome = earn1 + earn2 + earn3;

    // Output results
    cout << endl;
    cout << "============== FREELANCER INVOICE ==============" << endl;
    cout << client1 << " " << hours1 << " hrs @ $" << rate1 << "/hr = $" << earn1 << endl;
    cout << client2 << " " << hours2 << " hrs @ $" << rate2 << "/hr = $" << earn2 << endl;
    cout << client3 << " " << hours3 << " hrs @ $" << rate3 << "/hr = $" << earn3 << endl;
    cout << "------------------------------------------------" << endl;
    cout << "Total Income: = $" << totalIncome << endl;
    cout << "===============================================" << endl;
    cout << "Keep hustling!" << endl;

    return 0;
}