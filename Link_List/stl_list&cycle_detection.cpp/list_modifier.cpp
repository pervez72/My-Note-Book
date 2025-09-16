#include <bits/stdc++.h>
using namespace std;

int main(){
    // list<int> l={1,2,3,4,6,10};
    //list<int> l2;

    // value assign 
    // l2=l;

    // list last element add 
    // l.push_back(20);

    // list front add data
    // l.push_front(20);

    // delete top 
    // l.pop_back();

    // delete front 
    // l.pop_front(); 

    // access any position data
    // cout<<*next(l.begin(),2);
    
    // any position data inseart 
    //next(l.begin(),2) this is position set complexity O(n)
    //l.insert(next(l.begin(),2),200);

    // NEXT 
    //--------------------------------
    list<int> l={1,2,3,10,6,10};

    // position delete 
    // l.erase(next(l.begin(),2));

    // position delete multiple value, head and tail inside delete 
    // l.erase(next(l.begin(),2),next(l.begin(),4));

    //replace 
    // replace(l.begin(),l.end(),10,200);


    //find 
    auto it=find(l.begin(),l.end(),200);

    if(it==l.end())cout<<"found"<<"\n";
    else cout<<"not find";


   


    //print 
    for(int val:l){
        cout<<val<<"\n";
    }




}