#include <iostream>
#include <string>
using namespace std;

int main() {
    // Profile variables
    string fullName = "Sergio Rodarte";
    string nickName = "Serg";
    int age = 30;
    double height = 5.11; // in feet
    string favoriteColor = "Red";
    string cityOfBirth = "Riverside, CA";
    string favoriteFood = "Tacos";
    int numberOfPets = 2;
    double yearsOfService = 4; // military or other experience
    string dreamVacation = "Mikonos, Greece";

    // Display Profile Header
    cout << "=====================================\n";
    cout << "          About Me Profile           \n";
    cout << "=====================================\n\n";

    // Display facts in table style
    cout << "Full Name:          " << fullName << endl;
    cout << "Nickname:           " << nickName << endl;
    cout << "Age:                " << age << endl;
    cout << "Height:             " << height << " ft" << endl;
    cout << "Favorite Color:     " << favoriteColor << endl;
    cout << "City of Birth:      " << cityOfBirth << endl;
    cout << "Favorite Food:      " << favoriteFood << endl;
    cout << "Number of Pets:     " << numberOfPets << endl;
    cout << "Years of Service:   " << yearsOfService << endl;
    cout << "Dream Vacation:     " << dreamVacation << endl;

    cout << "\n=====================================\n";

    // Paragraph-style introduction
    cout << "Hello! My name is " << fullName << ", but most of my friends call me "
        << nickName << ". I am " << age << " years old and was born in "
        << cityOfBirth << ". I'm " << height << " feet tall, love the color "
        << favoriteColor << ", and could eat " << favoriteFood << " any day. ";
    cout << "I currently have " << numberOfPets << " pets and spent "
        << yearsOfService << " years serving in the military. "
        << "One of my biggest dreams is to travel to " << dreamVacation
        << " and experience its culture. Thanks for reading my profile!\n";

    return 0;
}