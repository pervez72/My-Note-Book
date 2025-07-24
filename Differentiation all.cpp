#include <iostream>
using namespace std;

// Define the function f(x) = 4 * x^2
double f(double x) {
    return 4 * x * x;
}

// First order derivative methods
double forward(double x, double h) {
    return (f(x + h) - f(x)) / h;
}

double backward(double x, double h) {
    return (f(x) - f(x - h)) / h;
}

double central(double x, double h) {
    return (f(x + h) - f(x - h)) / (2 * h);
}

double five_point(double x, double h) {
    return (-f(x + 2 * h) + 8 * f(x + h) - 8 * f(x - h) + f(x - 2 * h)) / (12 * h);
}

// Second order derivative
double second_order(double x, double h) {
    return (f(x + h) + f(x - h) - 2 * f(x)) / (h * h);
}

int main() {
    double x, h;

    // Take user input
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of h: ";
    cin >> h;

    // Calculate and display results
    cout << fixed;
    cout << "Forward Derivative      : " << forward(x, h) << endl;
    cout << "Backward Derivative     : " << backward(x, h) << endl;
    cout << "Central Derivative      : " << central(x, h) << endl;
    cout << "Five Point Derivative   : " << five_point(x, h) << endl;
    cout << "Second Order Derivative : " << second_order(x, h) << endl;

    return 0;
}
