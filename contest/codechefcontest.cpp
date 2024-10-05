#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>t;
    int x=0;
    while(t--)
    {
     cin>>n;
     if (n<=10 && n>=1)
     {
        if(1)
        {
            x=1;
            if(x>=n){
            if(x==n)
            {
                cout<<"Alice"<<"\n";
            }
            else
            {
                cout<<"BOB"<<"\n";
            }
        }
        else
        {
             if(x==n)
            {
                cout<<"Alice"<<"\n";
            }
            else
            {
                cout<<"BOB"<<"\n";
            }
        }
        
        } 
        else
        {
        x=2;
        if(x>=n)
        {
            if(x==n)
            {
                cout<<"Alice"<<"\n";
            }
            else
            {
                cout<<"BOB"<<"\n";
            }
        }
        else
        {
             if(x==n)
            {
                cout<<"Alice"<<"\n";
            }
            else
            {
                cout<<"BOB"<<"\n";
            }
            
        }
        
         
        }
        //reset x
        x=0; 
}
}
}