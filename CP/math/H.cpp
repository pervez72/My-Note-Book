#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a,b;
    long long temp;
    cin>>a>>b;
    long long n1,n2;
    n1=a;
    n2=b;
    while (b!=0)
    {
       temp=a;
       a=b;
       b=temp%a; 
    }
    long long gcd=a;
    long long lcm=(n1*n2)/gcd;
    
    cout<<gcd<<" "<<lcm;
   
}     
 