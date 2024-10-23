#include<bits/stdc++.h>
using namespace std;
void print(int n){
    static int i=1;
    if (n==0)
    {
        return; 
    }
    cout<<n;
    if(n>i)cout<<" ";
    return print(n-1);
}
int main(){
    int x;
    cin>>x;
    print(x);
}