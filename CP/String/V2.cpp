#include <iostream>
#include<string>
using namespace std;


int main()
{
    string s;
    cin>>s;

   for (int i = 0; i < s.size(); i++)
   {
    if(s.substr(i,5)=="EGYPT"){
        s.replace(i,5," ");
    }
   }
   cout<<s;
}