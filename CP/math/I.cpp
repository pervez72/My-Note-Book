#include<bits/stdc++.h>
using namespace std;


long long sum(long long n){
    return n*(n+1)/2;
}
int main(){
    long long a,b,x;
    cin>>a>>b>>x;
    long long ma=max(a,b);

    long long mn=min(a,b);

    cout<<(sum(ma/x)*x)-(sum((mn-1)/x)*x);
}