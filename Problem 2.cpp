#include <iostream>
using namespace std;

int main() {
    // Welcome message
    cout << "****** Welcome to the Photography Trip Planner ******" << endl;

    // Declare variables
    double distA, distB, distC;
    double mpg, gasPrice, gearWeight;
    double totalDistance, fuelCost, weightFee, totalCost;
    const double WEIGHT_RATE = 0.15; // $0.15 per pound per mile

    // Input from user
    cout << "Miles to Location A: ";
    cin >> distA;

    cout << "Miles to Location B: ";
    cin >> distB;

    cout << "Miles to Location C: ";
    cin >> distC;

    cout << "Fuel efficiency (MPG): ";
    cin >> mpg;

    cout << "Gas price per gallon: ";
    cin >> gasPrice;

    cout << "Camera gear weight (lbs): ";
    cin >> gearWeight;

    // Calculations
    totalDistance = distA + distB + distC;
    fuelCost = (totalDistance / mpg) * gasPrice;
    weightFee = WEIGHT_RATE * gearWeight * totalDistance;
    totalCost = fuelCost + weightFee;

    // Output results
    cout << endl;
    cout << "=========== PHOTOGRAPHY TRIP PLANNER ===========" << endl;
    cout << "Total Distance:\t\t" << totalDistance << " miles" << endl;
    cout << "Fuel Efficiency:\t" << mpg << " MPG" << endl;
    cout << "Gas Price:\t\t$" << gasPrice << endl;
    cout << "Camera Gear Weight:\t" << gearWeight << " lbs" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "Estimated Fuel Cost:\t$" << fuelCost << endl;
    cout << "Weight Fee Estimate:\t$" << weightFee << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "Estimated Total Cost:\t$" << totalCost << endl;
    cout << "===============================================" << endl;
    cout << "Shoot smart. Travel safe!" << endl;

    return 0;
}