#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;


    bool isprime=true;
    if (n==1 || n==0)
    {
        isprime=false;
    }
    for (int i =2; i<=sqrt(n); i++)
    {
        if (n%i==0)
        {
            isprime=false;
            break;
        }
        
    }
    if (isprime)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
    
    
    
}