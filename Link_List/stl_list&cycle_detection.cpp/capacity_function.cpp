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

    list<int> l(10,3); // this 10 sise list and each value is 3

    //list clear
    // l.clear();

    // resize
    // l.resize(2);

    // check empty
    // if(l.empty()){
    //     cout<<"ok empty";
    // }

    // resize 
    l.resize(3,50);

    //print lsit
     for(int val:l){
        cout<<val<<" ";
     }
    }