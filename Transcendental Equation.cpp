#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<double> x(n), y(n);

    double sumX = 0, sumY = 0, sumXY = 0, sumXX = 0;

    for(int i = 0; i < n; i++)
    {
        cout << "Enter the value of x[" << i << "]: ";
        cin >> x[i];

        cout << "Enter the value of y[" << i << "]: ";
        cin >> y[i];
    }

    for(int i = 0; i < n; i++)
    {
        double X = log(x[i]);      // ln(x)
        double Y = log(y[i]);      // ln(y)
        sumX += X;
        sumY += Y;
        sumXY += X * Y;
        sumXX += X * X;
    }

    double b = (n * sumXY - sumX * sumY) / (n * sumXX - sumX * sumX);
    double A = (sumY - b * sumX) / n;
    double a = exp(A); // Convert back: a = e^A

    cout << "The best fit curve is: y = " << a << " * x^" << b << endl;

    return 0;
}
