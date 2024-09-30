#include<bits/stdc++.h>
using namespace std;

 int main(){
  string x;
  int y;
  cin>>x>>y;

    long long res=0;
    for (int i = 0; i<x.size(); i++)
    {
    res=res*10;
    res=res+x[i]-'0';                                                                                            
    res=res%y; 
    } 
    if (res==0)
    {
    cout<<"YES";
    }
    else
        cout<<"NO";
}
