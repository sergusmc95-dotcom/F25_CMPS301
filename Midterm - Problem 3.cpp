#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Helper function to determine the letter grade from a numeric average.
string getLetterGrade(double avg) {
    if (avg >= 97.0) return "A+";
    else if (avg >= 93.0) return "A";
    else if (avg >= 90.0) return "A-";
    else if (avg >= 87.0) return "B+";
    else if (avg >= 83.0) return "B";
    else if (avg >= 80.0) return "B-";
    else if (avg >= 77.0) return "C+";
    else if (avg >= 73.0) return "C";
    else if (avg >= 70.0) return "C-";
    else if (avg >= 60.0) return "D";
    else return "F";
}

int main() {
    // Variables to hold inputs
    string studentName;
    double s1 = 0.0, s2 = 0.0, s3 = 0.0;

    // Welcome header
    cout << "****** Welcome to the Grade Analyzer ******" << endl;

    // Input collection
    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter score for Assignment 1: ";
    cin >> s1;

    cout << "Enter score for Assignment 2: ";
    cin >> s2;

    cout << "Enter score for Assignment 3: ";
    cin >> s3;

    // Compute final average
    double finalAvg = (s1 + s2 + s3) / 3.0;

    // Determine letter grade
    string letter = getLetterGrade(finalAvg);

    // Report header
    cout << "============== FINAL GRADE REPORT ==============" << endl;

    // Output with required formatting
    cout << left << setw(30) << setfill('.') << "Student Name: " << studentName << endl;

    cout << left << setw(30) << setfill('.') << "Assignment 1: "
        << fixed << showpoint << setprecision(2) << s1 << endl;

    cout << left << setw(30) << setfill('.') << "Assignment 2: "
        << fixed << showpoint << setprecision(2) << s2 << endl;

    cout << left << setw(30) << setfill('.') << "Assignment 3: "
        << fixed << showpoint << setprecision(2) << s3 << endl;

    cout << "-----------------------------------------------" << endl;

    cout << left << setw(30) << setfill('.') << "Final Average: "
        << fixed << showpoint << setprecision(2) << finalAvg << endl;

    cout << left << setw(30) << setfill('.') << "Final Grade: " << letter << endl;

    cout << "=================================================" << endl;
    cout << "Keep up the great work!" << endl;

    return 0;
}