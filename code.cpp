#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int tt;
    cin>>tt;
    while (tt--)
    {
        cin>>s;
        if(s.length()>10)
        {
        cout<<s[0]<<s.length()-2<<s[s.length()-1]<<"\n";
        }else{
            cout<<s;
            }
    }
}