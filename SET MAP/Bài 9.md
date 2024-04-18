![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/452861f8-b1be-4986-b178-853e4035c94a)

Bài này cũng đơn giản. Lấy tất cả phần tử của 2 mảng rồi in từ lớn đến bé.

```cpp
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m; 
    cin >> n >> m;   
    set<int> se;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        se.insert(x);
    }
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        se.insert(x);
    }
    for(auto it = se.rbegin(); it != se.rend();it++){
        cout << *it << " ";
    }
}
```
