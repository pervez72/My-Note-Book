#include<bits/stdc++.h>
using namespace std;
int main()
{
  
int n;
cin>>n;

string s;
cin>>s;

int count=n;

for (int i = 0; i<n; i++)
{
    if (s[i]==s[i+1])count--;
    
}
cout<<count<<"\n";	
}



