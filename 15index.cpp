//                         Template

// #include <iostream>
// using namespace std;

// template <typename T>
// T add(T a, T b) {
//     return a + b;
// }

// int main() {
//     cout << add(3, 5) << endl;
//     cout << add(3.5, 2.2) << endl;
//     cout << add<string>("Ali ", "Khan") << endl;
// }





//       Template of class

// #include <iostream>
// using namespace std;

// template <class T>
// class add {
// private:
//     T v1;
//     T v2;

// public:
//     add(T a, T b) : v1(a), v2(b) {}

//     T addd() {
//         return v1 + v2;
//     }
// };

// int main() {
//     add<int> a(2, 6);
//     cout << a.addd() << endl;

//     return 0;

// }






// #include <iostream>
// #include <string>
// using namespace std;

// template <class T>
// class student {
//     string name;
//     T marks;

// public:
//     student(string n, T m) : name(n), marks(m) {
//         cout << "Name: " << name << endl;
//         cout << "Marks: " << marks << endl;
//     }
// };

// int main() {

//     student<int> s1("Ali", 50);
//     student<float> s2("Ahmad", 80.9);
//     student<string> s3("Moiz", "B");

//     return 0;
// }







// #include <iostream>
// using namespace std;

// template <class T1, class T2>
// class Add {
// public:
//     T1 a;
//     T2 b;

//     Add(T1 x, T2 y) : a(x), b(y) {}

//     auto sum() {
//         return a + b;
//     }
// };


// int main() {
// Add<int, float> obj(5, 2.5);
// cout << obj.sum();

// }






////                               Vector library





// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> nums;
//     nums.push_back(10);
//     nums.push_back(50);
//     nums.push_back(30);

//     for (int x : nums)
//     {
//         cout << x << " ";
//     }

//     return 0;
// }






// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     vector<int> nums;
//     nums.push_back(10);
//     nums.push_back(50);
//     nums.push_back(30);

// nums.resize(5); 
//     sort(nums.begin(), nums.end());
//     // reverse(nums.begin(), nums.end());

    // for (int x : nums)
    // {
    //     cout << x << " ";
    // }

//     return 0;
// }







// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> v1 = {1,2};
//     vector<int> v2 = {3,4};

//     v1.swap(v2);

//     for(auto i : v1) cout << i << " ";  // Output: 3 4
//     for(auto i : v2) cout << i << " ";  // Output: 1 2
// }








// //                           All Methods of vector




#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> nums;

    // 1. push_back()
    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);

    // 2. size()
    cout << "Size: " << nums.size() << endl;

    // 3. front() and back()
    cout << "Front: " << nums.front() << endl;
    cout << "Back: " << nums.back() << endl;

    // 4. [ ] and at()
    cout << "Index 1 (using []): " << nums[1] << endl;
    cout << "Index 2 (using at()): " << nums.at(2) << endl;

    // 5. begin() iterator
    auto it = nums.begin();
    cout << "First element (iterator): " << *it << endl;

    // 6. insert()
    nums.insert(nums.begin() + 1, 50); // insert 50 at index 1

    // 7. erase()
    nums.erase(nums.begin() + 2); // delete element at index 2

    // 8. Loop using iterator
    cout << "After insert & erase: ";
    for(auto it = nums.begin(); it != nums.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // 9. pop_back()
    nums.pop_back(); // remove last element

    // 10. reverse()
    reverse(nums.begin(), nums.end());

    cout << "After pop_back & reverse: ";
    for(int x : nums) cout << x << " ";
    cout << endl;

    // 11. sort()
    sort(nums.begin(), nums.end());

    cout << "After sorting: ";
    for(int x : nums) cout << x << " ";
    cout << endl;

    // 12. empty()
    if(nums.empty())
        cout << "Vector is empty" << endl;
    else
        cout << "Vector is not empty" << endl;

    // 13. clear()
    nums.clear();

    // 14. empty() after clear
    cout << "After clear(), empty(): " << nums.empty() << endl;

    return 0;
}



