![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/541f4a36-2a81-4e55-931f-ae82c9a14abb)

Chall này thì yêu cầu ta in ra kí tự lớn nhất, nhỏ nhất, lớn nhì, nhỏ nhì. Bởi vì các phần tử trong set sẽ được sắp xếp từ nhỏ đến lớn, nên vị trí của lớn nhất và nhỏ nhất lần lượt sẽ là `begin()` và `rbegin()`. 

Còn lớn nhì và nhỏ nhì. Thì mình sẽ dùng iterator trỏ vào `begin()` rồi `++` và tương tự với số nhỏ nhì.

```cpp
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    set<char> se;
    for(int i = 0; i < n; i++){
        char c; cin >> c;
        se.insert(c);
    }
    cout << se.size() << endl;
    cout << *se.rbegin() << " " << *se.begin() << " ";
    auto it = se.begin(); it++;
    auto it2 = se.rbegin(); it2++;
    cout << *it2 << " " << *it ;
}
```
