#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    double x[n], y[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Enter the value of x[" << i << "]: ";
        cin >> x[i];

        cout << "Enter the value of y[" << i << "]: ";
        cin >> y[i];
    }

    double xi = 0, yi = 0, xiyi = 0, xixi = 0;

    for(int i = 0; i < n; i++)
    {
        xi += x[i];
        yi += y[i];
        xiyi += x[i] * y[i];
        xixi += x[i] * x[i];
    }

    double b = (n * xiyi - xi * yi) / (n * xixi - xi * xi);
    double a = (yi - b * xi) / n;

    cout << "The best fit line is: y = " << a << " + " << b << "x" << endl;

    return 0;
}
