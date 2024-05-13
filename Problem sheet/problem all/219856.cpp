#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
   
    if (t>=1 && t<=100)
    {
     while (t--)
    {    
       string arr;
       cin>>arr;
       int length=arr.length();
       int flag=false;
        for (int i = 0; i < length; i++)
        {
            if ((arr[i]=='1' && arr[i+1]=='0' && arr[i+2]=='1') || (arr[i]=='0' && arr[i+1]=='1' && arr[i+2]=='0'))
            {
               flag=true;
               break;
            }
        }
        if(flag==true){
            cout<<"Good"<<"\n";
        }
        else
            cout<<"Bad"<<"\n";
    }
    }
    
}