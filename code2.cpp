// #include<bits/stdc++.h>
// using namespace std;

//  int main(){
//   string x;
//   int y;
//   cin>>x>>y;

//      if ((int)x[5]%5==0)
//     {
//         cout<<"yre3s"<<x[5];
//     }
    
 //}

 #include <iostream>
#include <string>

int main() {
    // Store the large number as a string
    std::string number = "15964964984964964989698496854968458948949649648969";
    
    // Get the last digit of the number
    char last_digit = number[number.length() - 1];

    // Check if the last digit is even or odd
    if ((last_digit - '0') % 2 == 0) {
        std::cout << "The number is even." << std::endl;
    } else {
        std::cout << "The number is odd." << std::endl;
    }

    return 0;
}
