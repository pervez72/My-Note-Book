#include<bits/stdc++.h>
using namespace std;


int sum(int n) {
    static int i=n;
    if (n == 0) return 0;  // 🛑 Base case
    int result= n + sum(n - 1); // 🔁 Recursive step
    i=i-1;
    cout<<"("<<i<<" -1) function call("<<i<<"-"<<i-2<<")"<<"\n";
    return result;
}

int main(){
    cout<<sum(5);
}


===========================================
তুমি জানতে চাচ্ছো 👉
**Direct, Tree, Tail Recursion** –
➤ **প্রতিটা টাইপের উদাহরণ, কোড, এবং সেটা কিভাবে কাজ করে (Pause/Resume + Stack-wise)**।

আমি নিচে প্রতিটি টাইপ:

* 💡 সহজ ভাষায় সংজ্ঞা
* ✅ উদাহরণ কোড (C++)
* 📦 Stack ভিজ্যুয়াল
* 🎯 Final ফলাফল

সব কিছু বাংলায় বুঝিয়ে দিলাম।

---

# 🟢 1. **Direct Recursion**

### 💡 সংজ্ঞা:

একটি ফাংশন সরাসরি নিজেকেই আবার কল করে।

### ✅ উদাহরণ: `sum(n)` = 1 + 2 + ... + n

```cpp
int sum(int n) {
    if (n == 0) return 0;
    return n + sum(n - 1);  // 👉 Direct call to self
}
```

### 🧠 কিভাবে কাজ করে: (n = 3)

```text
sum(3)
= 3 + sum(2)
= 3 + (2 + sum(1))
= 3 + (2 + (1 + sum(0)))
= 3 + 2 + 1 + 0 = 6
```

### 📦 Stack Call:

```text
Push:
sum(3)
→ sum(2)
→→ sum(1)
→→→ sum(0) → returns 0

Pop:
sum(1) = 1
sum(2) = 3
sum(3) = 6
```

---

# 🟡 2. **Tree Recursion**

### 💡 সংজ্ঞা:

একটি ফাংশন একাধিকবার নিজেকে কল করে (ডাল-পালার মতো বিস্তার হয়)।

### ✅ উদাহরণ: `fibonacci(n)`

```cpp
int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);  // 👉 Two recursive calls
}
```

### 🧠 কিভাবে কাজ করে: (n = 4)

```text
fib(4)
= fib(3) + fib(2)
= (fib(2) + fib(1)) + (fib(1) + fib(0))
= ((fib(1)+fib(0)) + 1) + (1 + 0)
= ((1+0)+1) + (1+0) = 3
```

### 📦 Tree Structure (Call Tree):

```
        fib(4)
       /      \
   fib(3)    fib(2)
   /    \     /   \
fib(2) fib(1) fib(1) fib(0)
 /  \
fib(1) fib(0)
```

### 📌 Total Calls:

Recursive call অনেক বেশি হয় → **Time: O(2ⁿ)**

---

# 🔵 3. **Tail Recursion**

### 💡 সংজ্ঞা:

Recursive call return স্টেটমেন্টের **শেষে থাকে**, পরে আর কোনো কাজ থাকে না।
👉 এটি memory optimization-friendly (Tail Call Optimization)।

### ✅ উদাহরণ: `sum(n)` with accumulator

```cpp
int tail_sum(int n, int acc = 0) {
    if (n == 0) return acc;
    return tail_sum(n - 1, acc + n);  // 👉 Tail call
}
```

### 🧠 কিভাবে কাজ করে: `tail_sum(3)`

```text
tail_sum(3, 0)
→ tail_sum(2, 3)
→ tail_sum(1, 5)
→ tail_sum(0, 6) → return 6
```

### 📦 Stack Visualization:

```text
Push Phase:
(3,0)
→ (2,3)
→→ (1,5)
→→→ (0,6) → return

Pop Phase:
নেই! কারণ শেষ লাইনেই return ছিল।
```

✅ **Tail Recursion এ Resume Phase থাকে না!**

---

## 📊 Side-by-Side Comparison:

| ফিচার               | Direct | Tree           | Tail                     |
| ------------------- | ------ | -------------- | ------------------------ |
| নিজেকে কল           | একবার  | দুইবার বা বেশি | একবার                    |
| Pause → Resume      | আছে    | অনেক pause     | pause + no resume work   |
| Stack বড় হয়?        | মাঝারি | খুব বড়         | না                       |
| Optimization সম্ভব? | না     | না             | ✔ Tail call optimization |

---

## ✅ উপসংহার:

* **Direct Recursion**: সব জায়গায় লাগে (sum, factorial, DFS)
* **Tree Recursion**: যখন একই সমস্যা split হয় (Fibonacci, Permutations)
* **Tail Recursion**: যখন efficiency দরকার (Functional Language বা Stack কমাতে)

---

তুমি চাও কি:

* এই ৩টার উপরে **MCQ Quiz বা বাস্তব প্রবলেম**?
* নাকি রান্না বা গল্প দিয়ে এই ৩টা আরেকবার সাজানো?

বললেই আমি বানিয়ে দিচ্ছি! 📘✨


==============================
তোমার প্রশ্নটি চমৎকার!
তুমি জানতে চাচ্ছো:

> `int sum(int n)` — এই কোডে কি **function call pause হয়**, আবার **resume হয়**?
> **না হলে কেন?**
> **Pause/Resume না থাকলে, কিভাবে কাজ করে?**

---

## ✅ সংক্ষিপ্ত উত্তর:

**হ্যাঁ**, এই ফাংশনে *pause* এবং *resume* হয় — কারণ এটা **direct recursion** এবং `return n + sum(n - 1)` এর মতো স্টেটমেন্টে, **ফাংশন কলের পরে** আরও কাজ (addition) আছে।

তাই —
➡️ `sum(n)` → **pause** করে `sum(n - 1)` কল করে
➡️ তারপর যখন `sum(n - 1)` থেকে উত্তর পায়, তখন **resume** হয়, এবং `n + result` হিসাব করে রিটার্ন দেয়।

---

## 🔍 লাইনে লাইনে ব্যাখ্যা:

```cpp
int sum(int n) {
    if (n == 0) return 0;                 // 🛑 Base Case: সরাসরি রিটার্ন
    return n + sum(n - 1);                // 🔁 Pause + Resume হয় এখানে
}
```

> `n + sum(n - 1)`
> এখানে `sum(n - 1)` এক্সিকিউট না হওয়া পর্যন্ত, উপরের `n +` অংশ **pause** থাকে।

---

## 🔧 উদাহরণ: `sum(3)`

```cpp
sum(3)
= 3 + sum(2)            // pause
= 3 + (2 + sum(1))      // pause
= 3 + (2 + (1 + sum(0)))// pause
= 3 + 2 + 1 + 0         // resume & calculate
= 6
```

---

## 📦 Stack-wise Explanation:

| Call Stack (Push Phase) | Resume Phase |
| ----------------------- | ------------ |
| sum(3) → sum(2)         | sum(0) = 0   |
| sum(2) → sum(1)         | sum(1) = 1   |
| sum(1) → sum(0)         | sum(2) = 3   |
|                         | sum(3) = 6   |

👉 এখানে প্রতিটি `sum(n)` call **pause** করে `sum(n - 1)` কে কল করে
👉 যখন base case `sum(0)` রিটার্ন করে, তখন আগের গুলো একে একে **resume** করে ফলাফল বের করে

---

## 🧠 তাহলে মূল কথা:

| বিষয়                          | উত্তর                                                                                                               |
| ----------------------------- | ------------------------------------------------------------------------------------------------------------------- |
| ফাংশন call কি pause হয়?       | ✅ হয়                                                                                                                |
| resume হয় কবে?                | যখন নিচের recursive call থেকে return আসে                                                                            |
| pause-resume না থাকলে কী হতো? | তাহলে ফাংশনটা **tail recursive** হতো (যেমন `return sum(n-1)`), কিন্তু এখানে addition বাকি থাকে, তাই **pause** দরকার |

---

## 🔍 চাও কি আমি এই pause/resume পুরোটা তোমার জন্য **animation-style** বা **call stack chart** দিয়ে উপস্থাপন করি?

বললেই বানিয়ে দিচ্ছি 💻📊


=============================================      