#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;

    for (int i = 0; i < s.size(); i++)
    {   
        if (s[i]=='E' && s[i+1]=='G' && s[i+2]=='Y' && s[i+3]=='P' && s[i+4]=='T')
        {
            i=i+4; //this line skip gypt
            cout<<" ";
        }
        else
            cout<<s[i];
    }
}