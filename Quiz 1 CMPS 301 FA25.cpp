#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int DAY_MIN = 1440;

    // Updated activity minutes
    int sleepMin = 420;  // 7 hours
    int classMin = 180;  // 3 hours
    int homeworkMin = 60;   // 1 hour
    int mealsMin = 90;   // 1.5 hours
    int gymMin = 120;  // 2 hours
    int funMin = 270;  // 4.5 hours
    int commuteMin = 120;  // 2 hours
    int otherMin = 180;  // 3 hours

    // Totals
    int productiveMin = classMin + homeworkMin + gymMin;
    int leisureMin = funMin + mealsMin;
    int remainingMin = otherMin;
    int usedMin = sleepMin + classMin + homeworkMin + mealsMin +
        gymMin + funMin + commuteMin + otherMin;

    // Conversions
    auto toHrs = [](int m) { return m / 60; };
    auto toMin = [](int m) { return m % 60; };

    int sleepH = toHrs(sleepMin), sleepM = toMin(sleepMin);
    int classH = toHrs(classMin), classM = toMin(classMin);
    int homeworkH = toHrs(homeworkMin), homeworkM = toMin(homeworkMin);
    int mealsH = toHrs(mealsMin), mealsM = toMin(mealsMin);
    int gymH = toHrs(gymMin), gymM = toMin(gymMin);
    int funH = toHrs(funMin), funM = toMin(funMin);
    int commuteH = toHrs(commuteMin), commuteM = toMin(commuteMin);
    int otherH = toHrs(otherMin), otherM = toMin(otherMin);

    int usedH = toHrs(usedMin), usedM = toMin(usedMin);
    int prodH = toHrs(productiveMin), prodM = toMin(productiveMin);
    int leisH = toHrs(leisureMin), leisM = toMin(leisureMin);
    int remH = toHrs(remainingMin), remM = toMin(remainingMin);

    double percent = (productiveMin / 1440.0) * 100.0;

    // Output
    cout << "================ MY PRODUCTIVE DAY SIMULATION ================\n";
    cout << "Activity Breakdown:\n";
    cout << "Sleep:\t\t" << sleepH << " hrs " << sleepM << " min\n";
    cout << "Class:\t\t" << classH << " hrs " << classM << " min\n";
    cout << "Homework:\t" << homeworkH << " hrs " << homeworkM << " min\n";
    cout << "Meals:\t\t" << mealsH << " hrs " << mealsM << " min\n";
    cout << "Gym:\t\t" << gymH << " hrs " << gymM << " min\n";
    cout << "Fun Time:\t" << funH << " hrs " << funM << " min\n";
    cout << "Commuting:\t" << commuteH << " hrs " << commuteM << " min\n";
    cout << "Other/Unplanned:\t" << otherH << " hrs " << otherM << " min\n";
    cout << "--------------------------------------------------------------\n";
    cout << "Total Time Used:\t" << usedH << " hrs " << usedM << " min\n";
    cout << "Productive Time:\t" << prodH << " hrs " << prodM << " min\n";
    cout << "Leisure Time:\t\t" << leisH << " hrs " << leisM << " min\n";
    cout << "Remaining/Other Time:\t" << remH << " hrs " << remM << " min\n";

    cout << fixed << setprecision(0);
    cout << "You used **" << percent << "%** of your day productively!\n";
    cout << "Great job, can you do better tomorrow?\n";
    cout << "==============================================================\n";

    return 0;
}