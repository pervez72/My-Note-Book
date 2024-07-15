#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[26]={0};

    int n;
    cin>>n;

    for (int i = 0; i<n; i++)
    {
        char c;
        cin>>c;
        arr[(int)c-97]++;
    } 

    for (int i=0; i<n; i++)
    {
       cout<<arr[i];
    }
    


}