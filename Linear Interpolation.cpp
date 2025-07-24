#include <iostream>
using namespace std;

int main() {
    double x1 = 2.0, fx1 = 1.4142;
    double x2 = 3.0, fx2 = 1.7321;
    double x = 2.5;

    if (x1 == x2) {
        cerr << "Error: x1 and x2 cannot be the same (division by zero)." << endl;
        return 1;
    }

    double fx = fx1 + (x - x1) * (fx2 - fx1) / (x2 - x1);
    cout << "Interpolated value at x = " << x << " is f(x) = " << fx << endl;

    return 0;
}
