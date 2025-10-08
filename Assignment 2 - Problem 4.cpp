#include <iostream>
#include <string>
using namespace std;

int main() {
    // Welcome message
    cout << "****** Welcome to the Guest Profile Generator ******" << endl;

    // Declare variables
    string fullName, preferredName, email, phone, location;
    string occupation, company, hobby, color, quote;

    // Gather input using getline
    cout << "Enter your full name: ";
    getline(cin, fullName);

    cout << "Enter your preferred name: ";
    getline(cin, preferredName);

    cout << "Enter your email address: ";
    getline(cin, email);

    cout << "Enter your phone number: ";
    getline(cin, phone);

    cout << "Enter your city and state: ";
    getline(cin, location);

    cout << "Enter your occupation: ";
    getline(cin, occupation);

    cout << "Enter your company or school: ";
    getline(cin, company);

    cout << "Enter your favorite hobby: ";
    getline(cin, hobby);

    cout << "Enter your favorite color: ";
    getline(cin, color);

    cout << "Enter a short quote or motto: ";
    getline(cin, quote);

    // Display formatted profile
    cout << endl;
    cout << "=========== GUEST PROFILE SHEET ===========" << endl;
    cout << "Name: " << fullName << endl;
    cout << "Preferred Name: " << preferredName << endl;
    cout << "Email: " << email << endl;
    cout << "Phone: " << phone << endl;
    cout << "Location: " << location << endl;
    cout << "Occupation: " << occupation << endl;
    cout << "Company/School: " << company << endl;
    cout << "Hobby: " << hobby << endl;
    cout << "Favorite Color: " << color << endl;
    cout << "Quote:" << endl;
    cout << quote << endl;
    cout << "===========================================" << endl;
    cout << "Thank you for sharing your profile!" << endl;

    return 0;
}