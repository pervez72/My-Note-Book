#include<bits/stdc++.h>
using namespace std;

int main(){

  string s;
  cin>>s;
  int e=0,g=0,p=0,y=0,t=0;
  int size=s.size();

  for (int i = 0; i < size; i++)
  {
    if (s[i]=='e' ||s[i]=='E')
    {
     e++;
    }
    if (s[i]=='g' ||s[i]=='G')
    {
     g++;
    }
    if (s[i]=='p' ||s[i]=='P')
    {
     p++;
    }
    if (s[i]=='y' ||s[i]=='Y')
    {
     y++;
    }
    if (s[i]=='t' ||s[i]=='T')
    {
     t++;
    }
  }

  int m1=min(e,g);
  int m2=min(y,p);
  int m3=min(t,e);

  int m4=min(m1,m2);
  int m5=min(m2,m3);

  int m6=min(m4,m5);
  cout<<m6;

  
}