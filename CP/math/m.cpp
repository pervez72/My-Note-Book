#include<bits/stdc++.h>
using namespace std;

long long all_fact(int n)
{
        long long counter=1;
        long long mul=1;
        while (counter<=n)
        {
        mul*=counter;
        counter++;
        }
        return mul;
}

int main(){
   int a,b;
   cin>>a>>b;
   int ab=a-b;
   if (a>=b)
   {
   cout<<all_fact(a)/(all_fact(b)*(all_fact(ab)))<<" ";
   cout<<all_fact(a)/all_fact(ab);

}
}