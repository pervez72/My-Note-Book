#include<bits/stdc++.h>
using namespace std;

void arryconcat(int a[],int b[],int size){
    int s=size+size;
    int c[s];
    for (int i=0; i<s; i++)
    {
        c[i]=a[i];
    }

    //
    for (int i = 0; i<s; i++)
    {
        cout<<c[i];
    }
    
}


 int main(){
    int size;
    int a[size],b[size];

    cin>>size;
    cout<<"\n";
    for (int i = 0; i < size; i++)
    {
      cin>>a[i];  
    }
    cout<<"\n";
    for (int i = 0; i < size; i++)
    {
      cin>>b[i];  
    }
    arryconcat(a,b,size);
 }