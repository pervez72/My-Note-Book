#include<bits/stdc++.h>
using namespace std;


int main(){
    string value;
    cin>>value;
    //0123456789 10 11
    //ahhllelllo o  u

                //  01234
    string myvalue="hello"; 
    int i=0;
    int j=0;

    while(true){

        if(i==value.size() || j==myvalue.size())break;


        if ( value[i]==myvalue[j])
        {
           j++;
        }
        i++;                                                                                                                                                                                                                                                                                                                                                                                                                                         
        
        
    }
    if (j==5)
        {
        cout<<"YES"<<"\n";
        }
        else
            cout<<"NO"<<"\n";
    

}




                         