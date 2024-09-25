#include<bits/stdc++.h>
using namespace std;

int main(){
    long long  n;
    cin>>n;
    long long sum=0;
    for (long long i =1; i<=sqrt(n); i++)
    {
        if (n%i==0)
        {
            sum+=i;
            if(i!=sqrt(n)){
                sum+=n/i;
            }
        }
    }
    cout<<sum;
    
}