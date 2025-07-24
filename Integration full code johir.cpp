#include <iostream>
#include <cmath>
using namespace std;

// Function to be integrated
double f(double x) {
    return 4 * x * x;
}

// Trapezoidal Rule
double trapezoidal(int n, double a, double b) {
    double h = (b - a) / n;
    double sum = f(a) + f(b);

    for (int i = 1; i < n; i++) {
        double t = a + i * h;
        sum += 2 * f(t);
    }

    return (h / 2.0) * sum;
}

// Simpson's 1/3 Rule
double simpsons(int n, double a, double b) {
    int N = 2 * n;  // Total subintervals must be even
    double h = (b - a) / N;
    double sum = f(a) + f(b);

    for (int i = 1; i < N; i++) {
        double t = a + i * h;
        sum += (i % 2 == 0) ? 2 * f(t) : 4 * f(t);
    }

    return (h / 3.0) * sum;
}

// Simpson's 3/8 Rule
double simpsons38(int n, double a, double b) {
    int N = 3 * n;  // Total subintervals must be multiple of 3
    double h = (b - a) / N;
    double sum = f(a) + f(b);

    for (int i = 1; i < N; i++) {
        double t = a + i * h;
        int weight = (i % 3 == 0) ? 2 : 3;
        sum += weight * f(t);
    }

    return (3 * h / 8.0) * sum;
}

int main() {
    double a = 8.0, b = 30.0;

    cout << "Trapezoidal Rule Results:\n";
    for (int n = 1; n <= 5; n++) {
        double result = trapezoidal(n, a, b);
        cout << "n = " << n << " -> Distance = " << result << " meters\n";
    }

    cout << "\nSimpson's 1/3 Rule Results:\n";
    for (int n = 1; n <= 5; n++) {
        double result = simpsons(n, a, b);
        cout << "n = " << n << " (2n = " << 2 * n << ") -> Distance = " << result << " meters\n";
    }

    cout << "\nSimpson's 3/8 Rule Results:\n";
    for (int n = 1; n <= 5; n++) {
        double result = simpsons38(n, a, b);
        cout << "n = " << n << " (3n = " << 3 * n << ") -> Distance = " << result << " meters\n";
    }

    return 0;
}

