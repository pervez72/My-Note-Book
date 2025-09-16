 =================================
    class মানেই custom data type
    🧠 ব্যাখ্যা:
    int, float, char — এগুলো হলো built-in (in-built) data type। আর class দিয়ে তুমি custom (নিজের তৈরি) data type বানাও।
    Ex:
    class TreeNode {
    public:
    int data;
    vector<TreeNode*> children;
    };

    here,
    যেমন int দিয়ে সংখ্যা রাখো, TreeNode দিয়ে একটা ট্রি-র নোড রাখো।
    এটা হলো একটি ক্লাস — মানে হলো, এটি একটি নতুন টাইপ (custom data type) বানাচ্ছে যেটা দিয়ে আমরা ট্রি-র নোড তৈরি করতে পারি।
    🧠 সংক্ষেপে:
    TreeNode হলো ক্লাস ⇒ একে দিয়ে অবজেক্ট তৈরি করা যায়।
    TreeNode root(1); ⇒ এটি একটি TreeNode টাইপ অবজেক্ট।
    TreeNode* p = new TreeNode(5); ⇒ p is TreeNode টাইপ অবজেক্টের পয়েন্টার। it store new TreeNode location.
 
 ============================================

`TreeNode*` হলো
👉 **`TreeNode` টাইপের পয়েন্টার (Pointer Data Type)**।

------------

### 🔍 ব্যাখ্যা:

* `TreeNode` → একটা **custom data type** (তুমি `class` দিয়ে বানিয়েছো)
* `TreeNode*` → হলো একটা **pointer**, যেটা `TreeNode` অবজেক্টের **মেমোরি address** ধরে রাখে

---

### 🧠 তুলনা করে দেখি:

| কোড                   | টাইপ        | অর্থ                  |
| --------------------- | ----------- | --------------------- |
| `int a = 5;`          | `int`       | সাধারণ সংখ্যা         |
| `int* p = &a;`        | `int*`      | `a` নাম্বারের address |
| `TreeNode t(10);`     | `TreeNode`  | একটা TreeNode অবজেক্ট |
| `TreeNode* ptr = &t;` | `TreeNode*` | `t` অবজেক্টের address |

---

### ✅ উদাহরণ:

```cpp
TreeNode* node = new TreeNode(5);
```

* এখানে `node` হচ্ছে `TreeNode*` টাইপ
* এটি `new` দিয়ে বানানো একটি `TreeNode` অবজেক্টের **মেমোরি ঠিকানা** (address) ধরে রাখে

---

### 📌 সংক্ষেপে:

| জিনিস               | মানে                             |
| ------------------- | -------------------------------- |
| `TreeNode`          | ক্লাস দিয়ে বানানো কাস্টম টাইপ    |
| `TreeNode*`         | ওই টাইপের pointer (address রাখে) |
| `vector<TreeNode*>` | অনেক TreeNode pointer রাখতে পারে |

---

==============================









