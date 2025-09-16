// // "যে ফাংশন কল করে, সে অপেক্ষা করে যতক্ষণ না কল করা ফাংশন কাজ শেষ করে রিটার্ন দেয়।
// // তারপর সে নিজে কাজ করে এবং রিটার্ন দেয় তার আগের জনকে।"

// #include <iostream>
// using namespace std;

// int sum(int n) {
//     cout << "Call sum(" << n << ") - pause here" << endl;  // ফাংশন কল হচ্ছে, pause
//     if (n == 0) {
//         cout << "Base case reached: sum(0) = 0" << endl;
//         return 0;
//     }
//     int res = n + sum(n - 1);  // recursive call, নিচে যাবে, pause হবে

//     cout << "Resume sum(" << n << "), result = " << res << endl;  // ফিরে এসে কাজ শুরু করলো
//     return res;
// }

// int main() {
//     int num = 3;
//     int f_res=sum(num);
//     cout << "Total sum: "<< f_res << endl;
//     return 0;
// }

// // int res = n + sum(n - 1);  this line brea point use and see call stack ok 


#include <iostream>
using namespace std;

int sum(int n) {
    static int i = 0;

    // 🛑 Base case: যখন n == 0, তখন আর নতুন কোনো কল হয় না
    if (n == 0) return 0;

    // 🟡 Pause phase:
    // এখনকার কাজ থামিয়ে, নতুন sum(n-1) কল হচ্ছে
    int result = n + sum(n - 1);

    // 🟢 Resume phase:
    // নিচের ফাংশন কল শেষ হয়ে আসছে, এখন কাজ শেষ করে উপরে return হচ্ছে
    i = i + 1;
    cout << "🔁 Resume count i = " << i << ", returning sum(" << n << ") = " << result << "\n";

    return result;
}

int main() {
    int total = sum(3);
    cout << "\n🎯 Final sum = " << total << endl;
    return 0;
}
