#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare variables
    string name;
    int age;
    string gender;
    int heightFeet;
    int heightInches;
    double weightPounds;
    int totalInches;
    double bmi;
    string bmiStatus;

    // Ask the user questions
    cout << "Please enter your name: ";
    getline(cin, name);

    cout << "Please enter your age: ";
    cin >> age;

    cout << "Please enter your Gender (male/female): ";
    cin >> gender;

    cout << "Please enter your height in feet: ";
    cin >> heightFeet;

    cout << "Please enter your height in inches: ";
    cin >> heightInches;

    cout << "Please enter your weight in pounds: ";
    cin >> weightPounds;

    // Process the responses
    totalInches = (heightFeet * 12) + heightInches;
    bmi = 703 * weightPounds / (totalInches * totalInches);

    // Determine BMI status
    if (bmi < 18.5) {
        bmiStatus = "Underweight";
    }
    else if (bmi < 25.0) {
        bmiStatus = "Normal weight";
    }
    else if (bmi < 30.0) {
        bmiStatus = "Overweight";
    }
    else {
        bmiStatus = "Obese";
    }

    // Output the result
    cout << endl;
    cout << "Hi " << name << "," << endl;
    cout << "You are a " << gender << ". ";
    cout << "You are " << age << " years old. ";
    cout << "You are currently " << heightFeet << "'" << heightInches;
    cout << " and you currently weight " << weightPounds << " pounds. ";
    cout << "Your BMI is " << bmi << ", which is " << bmiStatus << "." << endl;

    cout << "Thank you for using the BMI Calculator!" << endl;

    return 0;
}