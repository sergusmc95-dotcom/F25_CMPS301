#include <iostream>
#include <string>
using namespace std;

int main() {
    // Welcome message
    cout << "****** Welcome to Cinemagic Booking System ******" << endl;

    // Declare variables
    string customerName, movieTitle, showtime, seatNumber, theaterLocation;
    int theaterNumber, numTickets;
    double ticketPrice, total;

    // Input
    cout << "Enter customer name: ";
    getline(cin, customerName);

    cout << "Enter movie title: ";
    getline(cin, movieTitle);

    cout << "Enter showtime: ";
    getline(cin, showtime);

    cout << "Enter theater number: ";
    cin >> theaterNumber;
    cin.ignore(); // clear input buffer

    cout << "Enter seat number: ";
    getline(cin, seatNumber);

    cout << "Enter number of tickets: ";
    cin >> numTickets;

    cout << "Enter ticket price per person: ";
    cin >> ticketPrice;
    cin.ignore();

    cout << "Enter theater location: ";
    getline(cin, theaterLocation);

    // Calculation
    total = ticketPrice * numTickets;

    // Output
    cout << endl;
    cout << "========== CINEMAGIC TICKET CONFIRMATION ==========" << endl;
    cout << "Customer: " << customerName << endl;
    cout << "Movie: " << movieTitle << endl;
    cout << "Showtime: " << showtime << endl;
    cout << "Theater: " << theaterNumber << endl;
    cout << "Seat: " << seatNumber << endl;
    cout << "Location: " << theaterLocation << endl;
    cout << "Tickets: " << numTickets << endl;
    cout << "Price per Ticket: $" << ticketPrice << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Total: $" << total << endl;
    cout << "====================================================" << endl;
    cout << "Enjoy the show!" << endl;

    return 0;
}