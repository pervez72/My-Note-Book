#include<bits/stdc++.h>
using namespace std;

int main()
{
    
   string s;
   int flag=0;
   while (cin>>s) //infinte loop
   {
    reverse(s.begin(),s.end());
    if(flag){
        cout<<" ";
    }
    else
        flag=1;
        cout<<s;
   }
   
} 