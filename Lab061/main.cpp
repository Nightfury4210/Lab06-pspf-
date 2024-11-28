#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int tests = 2;
    double totalMarks, marks, mathAverage = 0, scienceAverage = 0, englishAverage = 0;
    int validTests;
    string subjectName;

    for (int i = 0; i < 3; i++) {
        if (i == 0) subjectName = "Math";
        else if (i == 1) subjectName = "Science";
        else subjectName = "English";

        totalMarks = 0;
        validTests = 0;

        cout << "Enter marks for " << subjectName << ":\n";

        for (int j = 0; j < tests; j++) {
            cout << "Test " << j + 1 << ": ";
            cin >> marks;

            if (marks < 0 || marks > 100) {
                cout << "Invalid marks! Skipping...\n";
                continue;
            }

            totalMarks += marks;
            validTests++;
        }

        double average = (validTests > 0) ? totalMarks / validTests : 0;

        if (subjectName == "Math") mathAverage = average;
        else if (subjectName == "Science") scienceAverage = average;
        else if (subjectName == "English") englishAverage = average;

        cout << subjectName << " Average: " << fixed << setprecision(1) << average << "\n\n";
    }

    cout << "Final Results:\n";
    cout << "Math: " << fixed << setprecision(1) << mathAverage << "\n";
    cout << "Science: " << fixed << setprecision(1) << scienceAverage << "\n";
    cout << "English: " << fixed << setprecision(1) << englishAverage << "\n";

    return 0;
}
