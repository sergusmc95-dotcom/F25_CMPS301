// CLass Schedule1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    // Header
    cout << "=============================================================\n";
    cout << "                    Fall 2025 Class Schedule                 \n";
    cout << "                     Student: Sergio Rodarte                 \n";
    cout << "=============================================================\n\n";

    // Table Header
    cout << "+----------+------------+---------+-----------------------------------+---------------------------+-----------------------+\n";
    cout << "| Day      | Time       | Course  | Course Title                      | Location                  | Instructor            |\n";
    cout << "+----------+------------+---------+-----------------------------------+---------------------------+-----------------------+\n";

    // Rows (6+ classes across multiple days)
    cout << "| Tue/Thur | 08:35-10:10| CS 368  | Principles Of Computer Networks   | Leo Hall 201              | Dr. Mohammad          |\n";
    cout << "| Tue/Thur | 10:20-11:55| CS 301  | Programming Concepts              | Founders Hall 307         | Prof. Rodriguez       |\n";
    cout << "| Tue      | 12:05-01:40| CS 200  | Information Technology            | Founders Hall             | Prof. Walker          |\n";
    cout << "| Wed      | 13:00-14:15| CS 240  | Networking Fundamentals           | Campus Center 212         | Prof. Kung            |\n";
    cout << "| Wed      | 11:30-12:45| CS 210  | Data Structures                   | Leo Hall 203              | Dr. Kim               |\n";
    cout << "| Thu      | 15:00-17:45| CS 350  | Database Systems (Lab)            | Founders Lab 120          | Dr. Alvarez           |\n";

    cout << "+----------+------------+---------+-----------------------------------+---------------------------+-----------------------+\n\n";

    // Total Units & Footer Note
    cout << "Total Units: 16\n";
    cout << "Note: You’ve got this! Stay consistent, hydrate, and code on. \n";

    return 0;
}