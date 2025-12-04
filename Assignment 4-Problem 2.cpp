#include <iostream>
using namespace std;

int main() {
    int month, day, year;
    char repeat = 'Y';

    cout << "Welcome to Birthday Date Meaning Generator!" << endl;

    while (repeat == 'Y' || repeat == 'y') {

        // Ask for inputs
        cout << "Please enter the month of your birthday (1-12): ";
        cin >> month;

        cout << "Please enter the day of your birthday (1-31): ";
        cin >> day;

        cout << "Please enter the year of your birthday (2000-2023): ";
        cin >> year;

        cout << endl;

        // --- MONTH MEANING ---
        switch (month) {
        case 1: cout << "The month of January means Janus"; break;
        case 2: cout << "The month of February means Purification"; break;
        case 3: cout << "The month of March means Mars"; break;
        case 4: cout << "The month of April means Aphrodite"; break;
        case 5: cout << "The month of May means Maia"; break;
        case 6: cout << "The month of June means Juno"; break;
        case 7: cout << "The month of July means Julius Caesar"; break;
        case 8: cout << "The month of August means Augustus"; break;
        case 9: cout << "The month of September means Seventh Month"; break;
        case 10: cout << "The month of October means Eighth Month"; break;
        case 11: cout << "The month of November means Ninth Month"; break;
        case 12: cout << "The month of December means Tenth Month"; break;
        default: cout << "Invalid month entered."; break;
        }
        cout << endl;

        // --- DAY MEANING ---
        switch (day) {
        case 1: cout << "The 1st of the month means Self-Starter"; break;
        case 2: cout << "The 2nd of the month means Sensitive & Intuitive"; break;
        case 3: cout << "The 3rd of the month means Creative & Expressive"; break;
        default: cout << "The " << day << "th of the month means Unique Personality"; break;
        }
        cout << endl;

        // --- YEAR MEANING ---
        switch (year) {
        case 2000: cout << "The year 2000 means you are a Millennial"; break;
        case 2001: cout << "The year 2001 means Intelligent & Independent"; break;
        case 2002: cout << "The year 2002 means Cooperative & Thoughtful"; break;
        case 2003: cout << "The year 2003 means Creative & Social"; break;
        case 2004: cout << "The year 2004 means Organized & Logical"; break;
        case 2005: cout << "The year 2005 means Energetic & Adventurous"; break;
        case 2006: cout << "The year 2006 means Responsible & Caring"; break;
        case 2007: cout << "The year 2007 means Deep Thinker"; break;
        case 2008: cout << "The year 2008 means Ambitious & Strong"; break;
        case 2009: cout << "The year 2009 means Artistic & Emotional"; break;
        case 2010: cout << "The year 2010 means Innovative & Bold"; break;
        case 2011: cout << "The year 2011 means Intuitive & Inspiring"; break;
        case 2012: cout << "The year 2012 means Confident & Driven"; break;
        case 2013: cout << "The year 2013 means Analytical & Smart"; break;
        case 2014: cout << "The year 2014 means Optimistic & Friendly"; break;
        case 2015: cout << "The year 2015 means Balanced & Mature"; break;
        case 2016: cout << "The year 2016 means Innovative & Curious"; break;
        case 2017: cout << "The year 2017 means Creative & Unique"; break;
        case 2018: cout << "The year 2018 means Honest & Determined"; break;
        case 2019: cout << "The year 2019 means Empathetic & Wise"; break;
        case 2020: cout << "The year 2020 means Resilient & Strong"; break;
        case 2021: cout << "The year 2021 means Peaceful & Adaptable"; break;
        case 2022: cout << "The year 2022 means Insightful & Calm"; break;
        case 2023: cout << "The year 2023 means Visionary & Brave"; break;
        default: cout << "Invalid year entered."; break;
        }

        cout << endl << endl;

        // Ask the user if they want to continue
        cout << "Would you like to try another one? (Y/N): ";
        cin >> repeat;
        cout << endl;
    }

    // Ending
    cout << "Thanks for playing!" << endl;

    return 0;
}