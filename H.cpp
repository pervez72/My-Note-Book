#include<bits/stdc++.h>
using namespace std;

void dis(int n,char c){
   for (int i = 0; i < n; i++)
   { 
    cout<<c<<" ";
   }
   
}

int main(){
    int tt;
    cin>>tt;

    if(tt>=1 && tt<=50)
    {
        while (tt--)
        {
            int num;
            char ch;
            cin>>num>>ch;
            if(num>=1 && num<=100)
            {
               dis(num,ch);
            }
        }
    }
    
}