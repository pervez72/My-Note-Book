#include <bits/stdc++.h>
using namespace std;

int main(){
    // list declear, this is basically doubly link list

    // list<int> l(10,3); // this 10 sise list and each value is 3
    // cout<<*l.begin()<<"\n"; 

    // //print lsit
    // for(auto it=l.begin(); it!=l.end(); it++ ){
    //     cout<<*it<<" ";
    // }

    //  //print lsit

    //  for(int val:l){
    //     cout<<val<<" ";
    //  }


     // NEXT 
     //------------------------------------------
    //list copy 
     list<int> l={2,1,2};
     list<int> l1=l;
    
     // arry copy 
     int a[]={4,5,4}

     list<int> l1(a,a+3);
     for(int val:l1){
        cout<<val<<" ";
     }


}