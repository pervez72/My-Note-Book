#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    int gcd_value=gcd(a,b);
    int lcm=(a*b)/gcd_value;
    cout<<gcd_value<<" "<<lcm;
}
