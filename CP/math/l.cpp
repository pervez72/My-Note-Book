#include<bits/stdc++.h>
using namespace std;


int main(){
 long long n;
    cin>>n;
    int value;
    for (int i = 0; i<n; i++)
    {   
        value =1;
        for (int j= 0; j<=i; j++)
        {
            cout<<value<<" ";
            value=value*(i-j)/(j+1);
        }
        cout<<"\n";
        
    }
}