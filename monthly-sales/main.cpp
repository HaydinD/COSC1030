//
// Haydin Davis
// 4/17
// Monthly Sales Programming Project
// COSC 1030
//
#include <iostream>
#include <vector>

using namespace std;

// Function to calculate the sum of all sales
double calculateYearlySales(const vector<double>& sales) {
    double sum = 0;
    for (double sale : sales) {
        sum += sale;
    }
    return sum;
}

// Function to calculate the average sales
double calculateAverageSales(const vector<double>& sales) {
    if (sales.empty()) {
        return 0.0; // Return 0 if the vector is empty to avoid division by zero
    }
    return calculateYearlySales(sales) / sales.size();
}

int main() {
    int numMonths;

    // Get the number of months from the user
    cout << "Enter the number of months: ";
    cin >> numMonths;

    // Dynamically allocate an array (using vector) to store monthly sales
    vector<double> monthlySales(numMonths);

    // Input monthly sales
    cout << "Enter the sales for each month:" << endl;
    for (int i = 0; i < numMonths; ++i) {
        cout << "Month " << i + 1 << ": ";
        cin >> monthlySales[i];
    }

    // Calculate and display the yearly sum
    double yearlySum = calculateYearlySales(monthlySales);
    cout << "Yearly Sales: $" << yearlySum << endl;

    // Calculate and display the average sales
    double averageSales = calculateAverageSales(monthlySales);
    cout << "Average Sales: $" << averageSales << endl;

    return 0;
}
