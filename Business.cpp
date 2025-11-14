#include <iostream> // Header file
#include <cmath> // For mathematical functions
#include <iomanip> // This header file stands for input/output manipulators

using namespace std;
int main() {
    cout << "\n";
    cout << " Program that computes the profit made from selling a motor vehicle " << "\n";

    // Declaring variables.
    double buyingPrice;
    double sellingPrice;
    double profit;

    // User input for buying price and selling price.
    cout << "\n"; // For better output formatting
    cout << "Enter the Buying price: $";
    cin >> buyingPrice;

    cout << "Enter the Selling Price: $";
    cin >> sellingPrice;

    // Calculating the profit made by subtracting buying price from selling price.
    profit = sellingPrice - buyingPrice;

    if(profit > 0) {
        cout << "Profit made: $" << profit << "\n";
    } else if (profit < 0) {
        cout << "Loss made: $" << -profit << "\n";
    } else {
        cout << "No profit, no loss. (Even)" << "\n";
    }
    
    cout << "\n"; // For better output formatting

    return 0;
}