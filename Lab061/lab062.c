#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int basePrice = 5;
    const int shelves = 3;
    const int sections = 3;
    const int giftsPerSection = 2;

    int shelfPrice = 5;

    for (int i = 1; i <= shelves; i++) {
        cout << "Shelf " << i << " (Shelf Price: $" << shelfPrice << "):\n";

        int sectionPrice = 1;
        for (int j = 1; j <= sections; j++) {
            cout << "  Section " << j << " (Section Price: $" << sectionPrice << "):\n";

            for (int k = 1; k <= giftsPerSection; k++) {
                int giftPrice = basePrice + shelfPrice + sectionPrice;
                cout << "    Gift " << k << " Price: $" << giftPrice << "\n";
            }

            sectionPrice += 1;
        }

        shelfPrice += 3;
        cout << endl;
    }

    return 0;
}
