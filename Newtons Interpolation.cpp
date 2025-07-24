#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of data points: ";
    cin >> n;

    vector<double> x(n), y(n);
    cout << "Enter x and f(x) values:\n";
    for (int i = 0; i < n; i++) {
        cout << "x[" << i << "]: ";
        cin >> x[i];
        cout << "f(x[" << i << "]): ";
        cin >> y[i];
    }

    // Create a 2D table for divided differences
    vector<vector<double>> table(n, vector<double>(n));

    // Fill first column with y values
    for (int i = 0; i < n; i++) {
        table[i][0] = y[i];
    }

    // Fill divided differences
    for (int j = 1; j < n; j++) {
        for (int i = 0; i < n - j; i++) {
            table[i][j] = (table[i + 1][j - 1] - table[i][j - 1]) / (x[i + j] - x[i]);
        }
    }

    double targetX;
    cout << "Enter x to interpolate: ";
    cin >> targetX;

    // Apply Newton's formula
    double result = table[0][0];
    double term = 1.0;
    for (int i = 1; i < n; i++) {
        term *= (targetX - x[i - 1]);
        result += term * table[0][i];
    }

    cout << "Estimated f(" << targetX << ") = " << result << endl;
    return 0;
}
