#include<bits/stdc++.h>
using namespace std;

int main(){
    int size,times;
    cin>>size>>times;
    int a[size];
    for (int  i = 0; i < size; i++)
    {
        cin>>a[i];
    }
    int sh=times%size;

    for (int i = size-sh; i<size; i++){
        cout<<a[i]<<" ";
    }

    for (int i =0; i<size-sh; i++){
        cout<<a[i]<<" ";
    }
}