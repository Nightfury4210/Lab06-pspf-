#include <iostream>
using namespace std;

int main() {
    const int savingsGoal = 100;
    int totalSaved = 0, dailySavings, totalDays = 0;

    cout << "Savings Goal: $" << savingsGoal << endl;

    while (totalSaved < savingsGoal) {
        totalDays++;
        cout << "Enter Day " << totalDays << " savings: $";
        cin >> dailySavings;

        totalSaved += dailySavings;
        cout << "Progress: $" << totalSaved << endl;
        cout << "Remaining: $" << savingsGoal - totalSaved << endl;

        if (totalSaved >= savingsGoal) {
            cout << "Goal Reached!!!" << endl;
            break;
        }
    }

    cout << "\nTotal days taken: " << totalDays << endl;
    cout << "Total amount saved: $" << totalSaved << endl;
    cout << "Extra savings: $" << totalSaved - savingsGoal << endl;

    return 0;
}
