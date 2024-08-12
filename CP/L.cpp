#include<bits/stdc++.h>
using namespace std;

const int s =10001;
void arryconcat(int a[],int size){
   for (int i = 0; i < size; i++)
   {
    cout<<a[i]<<" ";
   }
}


 int main(){
    int size;
    int a[s],b[s];

    cin>>size;
    //cout<<"\n";
    for (int i = 0; i < size; i++)
    {
      cin>>a[i];  
    }
    //cout<<"\n";
    for (int i = 0; i < size; i++)
    {
      cin>>b[i];  
    }
    arryconcat(b,size);
    arryconcat(a,size);
 }