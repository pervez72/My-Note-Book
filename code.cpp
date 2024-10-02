#include<bits/stdc++.h>
using namespace std;

void print(int n){
    int temp;
       if(n/10==0)
       {
        return ;
       }
       cout<<n%10<<" ";
       return print(n/10);

}

int main(){
    int t;
    cin>>t;

    while (t--)
    {
    int n;
    cin>>n;
    print(n);
    cout<<"\n";
    }
    
   
}