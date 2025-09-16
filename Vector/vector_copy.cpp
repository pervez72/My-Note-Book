
#include <bits/stdc++.h>
using namespace std;

// Vector to vector copy
// const reference → শুধু পড়া যাবে, পরিবর্তন নয়
void add(vector<int> &copy_vector, const vector<int> &original) {

  for (int x : original) {
    copy_vector.push_back(x); // value copy original ====> copy_vector
  }
}

int main() {
  // Original vector
  vector<int> original = {1, 2, 3, 4, 5};

  // copy vector
  vector<int> copy_vector; // add function use reference for change main
                           // function copyvector manupulate

  add(copy_vector, original);
  // print vector is copyed
  for (int i : copy_vector) {
    cout << i << " ";
  }
}


// more 

#include <bits/stdc++.h>
using namespace std;

// here refernce is direct main function vector is changed, becuse reference used 
void add(vector<int>&a){ // a vector is manupulate original vector. 
  a.push_back(10);
  a.push_back(10);
  a.push_back(10);
  a.push_back(10);
  
}

int main(){
  vector<int> a;
  add(a);

  for(int i:a){
    cout<<i<<" ";
  }
}
