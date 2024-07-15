#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=4;
    int arr[n];
    //data insert 

    for (int i = 0; i < n; i++)
    {
    cin>>arr[i];
    }
    
    for (int sp = 0; sp<n; sp++) //sp=start point and ep=end point 
    {
       for (int ep=sp; ep<n; ep++)
       {
        //see start and end point 
        //cout<<sp<<"\t"<<ep<<"\n";

        //print subarray
        for (int i = sp; i<=ep; i++)
        {
            cout<<arr[i];
        }
        cout<<"\n";
        
       }
       
    }
    

}