#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string maintext,copytext;
    getline(cin,maintext);

    int length=maintext.length();
    copytext=maintext; //now maintext is modyfied

    reverse(maintext.begin(),maintext.end());
    string revtext=maintext; 
   
    
    int j,k=0;
    for (int i=0,j=0; i<length; i++,j++)
    {
        if(revtext[i]!=copytext[j]){
            k++;
            break;
        }
    }
    
    if(k==0){
        cout<<"YES";
    }
    else
        cout<<"NO"; 
}