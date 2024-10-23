#include<bits/stdc++.h>
using namespace std;

int main(){
   
    int n,c;
    cin>>n>>c;

    int a[n];
    for (int i = 0; i<n; i++)
    {
       cin>>a[i];
    }
    
    int cnt=1;
    for (int i=0; i < n; i++)
    {   
        if(a[0]){
            cnt++;
        }

        if ((a[i+1]-a[i])>=c)
        {
            cnt++;

        }
        
    }
    
}
