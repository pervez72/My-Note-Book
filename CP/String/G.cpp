#include<bits/stdc++.h>
using namespace std;

void max_min(int a[],int size){

    int max=a[0];
    int min=a[0];

    for (int i = 0; i <size; i++)
    {
        if (max<=a[i])
        {
            max=a[i];
        }

        if (min>=a[i])
        {
            min=a[i];
        }
        
    }
    cout<<min<<" "<<max;

}

int main(){
    int tt;
    cin>>tt;

    int arr[tt];
    for (int i = 0; i <tt; i++)
    {
        cin>>arr[i];
    }
    max_min(arr,tt);
}