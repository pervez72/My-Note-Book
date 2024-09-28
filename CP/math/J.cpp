#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;

    int flag=0;
    for (int i = 2; i<=sqrt(n); i++)
    {   
        int counter=0;
        while(n%i==0)
        {
           counter++;
           n/=i;  
        }
        if (counter>0 && flag>0)
        {
            cout<<"*";
        }
        if (counter>0)
           {
            cout<<"("<<i<<"^"<<counter<<")";
            flag=1;
          }
        if (n==1)
        {
            break;
        }
        
        
    }

    if (n>1 && flag)
    {
        cout<<"*";
    }
    if (n>1)
    {
        cout<<"("<<n<<"^"<<1<<")";
    }
}