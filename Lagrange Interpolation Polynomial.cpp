#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<< "Enter the points number: ";
    cin>> n;
    double x[n], y[n];

    for(int i = 0; i < n; ++i)
    {
        cout<< "Enter the value of x["<<i<< "]: ";
        cin>> x[i];

        cout<< "Enter the value of y["<<i<< "]: ";
        cin>> y[i];
    }

    double result = 0.0, targetX ;
    cout<< "Enter the value of x: ";
    cin>> targetX;

    for(int i = 0; i < n; i++)
    {
        int term = y[i];
        for(int j = 0; j < n; j++)
        {
            if(j!=i)
            {
                term = term * (targetX - x[j])/(x[i] - x[j]);
            }
        }
        result += term;
    }

    cout<< "The interpolated number for " << targetX<< " is: "<< result <<endl;
    return 0;
}
