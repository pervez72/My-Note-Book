#include<bits/stdc++.h>
using namespace std;

const int s=1000;
int count_num(int a[],int size){
    int count=1;
    for (int i = 1; i < size; i++)
    {
        if (a[i]!=a[i-1])
        {
            count++;
        } 
    }
    return count; 
}


int main(){
    int size;
    cin>>size;

    if (size==0)
    {
        cout<<0;
        return 0;
    }
    
    int arr[s];
    for (int i = 0; i<size; i++)
    {
        cin>>arr[i];
    }
    
    sort(arr,arr+size);

    cout<<count_num(arr,size)<<"\n";
    
}
