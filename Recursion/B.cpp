#include<bits/stdc++.h>
using namespace std;

void print(int n){
    static int i=1;
   if(n==0)return;
   cout<<i++<<"\n";
   print(n-1);
}
int main(){
    int n;
    cin>>n;
    print(n);
}