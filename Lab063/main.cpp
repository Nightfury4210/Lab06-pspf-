#include <iostream>
using namespace std;

int main() {
    const int maxOrders = 5;
    const int pricePerCupcake = 40;
    int totalSales = 0, validOrders = 0, cancelledOrders = 0;

    cout << "Welcome to the Bakery!\n";
    cout << "Price per cupcake: $" << pricePerCupcake << "\n";

    for (int i = 1; i <= maxOrders; i++) {
        int numCupcakes;
        char orderStatus;

        cout << "Order #" << i << ":\n";
        cout << "Number of cupcakes: ";
        cin >> numCupcakes;
        cout << "Order status (V-valid/C-cancelled): ";
        cin >> orderStatus;

        if (orderStatus == 'C' || orderStatus == 'c') {
            cout << "Order cancelled! Skipping...\n";
            cancelledOrders++;
            continue;
        }

        int orderTotal = numCupcakes * pricePerCupcake;
        cout << "Order total: $" << orderTotal << "\n";
        totalSales += orderTotal;
        validOrders++;
    }

    cout << "\nSales Summary:\n";
    cout << "Orders processed: " << validOrders + cancelledOrders << "\n";
    cout << "Valid orders: " << validOrders << "\n";
    cout << "Cancelled orders: " << cancelledOrders << "\n";
    cout << "Total sales: $" << totalSales << "\n";

    return 0;
}
