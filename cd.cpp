#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;

    if ((x>=150 && x<=250) && (y<=x+6 && y>=150))
    {   
        int z=x-y;
        if (z>=18)
        {
          cout<<"RCB";
        }else{
            cout<<"CSK";
        }
        
    }
    
}
