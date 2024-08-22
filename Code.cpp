#include<bits/stdc++.h>
using namespace std;

long long oddsum(long long num){
    long long res=(num+1)/2;
    long long finalres=res*res;
    return res;
}
long long evensum(long long num){
    long long res=((num+1)*num);
    return res;
}
int main(){
    int num1,num2;
    cin>>num1>>num2;

    int start,end;
    if (num1>=num1)
    {
        start=num2;
        end=num1;
    }
    else{
        start=num1;
        end=num2;
    }

    cout<<oddsum(end)-oddsum(start-1)<<"\n";
    cout<<evensum(end/2)-evensum((start-1)/2)<<"\n";
    
    
}