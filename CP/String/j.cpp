#include<bits/stdc++.h>
using namespace std;

void average(double a[],int size){
    double sum=0,avg;
    for (int i = 0; i < size; i++)
    {
        sum+=a[i];
    }
    avg=sum/size;
    cout<<fixed<<setprecision(7)<<avg;
}
int main(){

    int num;
    cin>>num;

    double arr[num];
    for (int i = 0; i < num; i++)
    {
        cin>>arr[i];
    }
    average(arr,num);
}