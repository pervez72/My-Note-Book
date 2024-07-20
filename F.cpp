#include<bits/stdc++.h>
using namespace std;

void equation(int x,int n){
    int sum=0;
    int mul=1;
    for (int i=2; i<n; i+=2)
    {   
        for (int j=1; j<=i; j++)
        {
            mul=mul*x;
        }
        sum=sum+mul;
        mul=1;    
    }

    cout<<sum;
}
int main(){
    int b,p;
    cin>>b>>p;
    if((b>=0 && b<=10)&&(p>=0 && p<=10))
    {
   equation(b,p);  
    }
   return 0; 
}