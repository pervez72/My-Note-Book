#include<bits/stdc++.h>
using namespace std;

int main(){
    string original="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
         string key="PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";\
         int z=0;
    int flag;
    cin>>flag;

    string userstring;
    cin>>userstring;

    int size=userstring.size();

    if (flag>=1 &&flag<=2)
    {
      if (flag==1)
    {
      for (int i = 0; i<size; i++)
    {   
        for (z = 0; z<original.size(); z++)
        {
            if(userstring[i]==original[z]){
                break;
            }
        }
        cout<<key[z];
        
    }  
    }
    else{
          for (int i = 0; i<size; i++)
         {   
        for (z = 0; z<key.size(); z++)
        {
            if(userstring[i]==key[z]){
                break;
            }
        }
        cout<<original[z];
        
    } 
    }
      
     
    }
}

