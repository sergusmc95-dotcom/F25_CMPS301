#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // Variables
    string studentName;
    double gpa;
    int satScore;
    char extra;
    bool eligible = false;
    string reason;

    // Welcome Message
    cout << "****** Welcome to the College Admission Checker ******" << endl;

    // User Input
    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter GPA (0.0 - 4.0): ";
    cin >> gpa;

    cout << "Enter SAT score (out of 1600): ";
    cin >> satScore;

    cout << "Participated in extracurriculars? (Y/N): ";
    cin >> extra;

    // Determine Eligibility
    if (gpa >= 3.5 && satScore >= 1200) {
        eligible = true;
        reason = "Qualified based on high GPA and SAT score";
    }
    else if (gpa >= 3.0 && satScore >= 1000 && (extra == 'Y' || extra == 'y')) {
        eligible = true;
        reason = "Qualified based on GPA, SAT, and extracurriculars";
    }
    else {
        eligible = false;
        reason = "Did not meet minimum admission requirements";
    }

    // Output Results
    cout << "============== ADMISSION RESULT ==============" << endl;
    cout << left << setw(30) << setfill('.') << "Student Name: " << studentName << endl;
    cout << left << setw(30) << setfill('.') << "GPA: "
        << fixed << showpoint << setprecision(2) << gpa << endl;
    cout << left << setw(30) << setfill('.') << "SAT Score: " << satScore << endl;

    cout << left << setw(30) << setfill('.') << "Extracurriculars: ";
    if (extra == 'Y' || extra == 'y')
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    cout << "---------------------------------------------" << endl;

    if (eligible)
        cout << "Admission Decision: ACCEPTED" << endl;
    else
        cout << "Admission Decision: NOT ACCEPTED" << endl;

    cout << "Reason: " << reason << endl;

    cout << "=============================================" << endl;

    if (eligible)
        cout << "Congratulations and best wishes!" << endl;
    else
        cout << "We encourage you to apply again in the future." << endl;

    return 0;
}