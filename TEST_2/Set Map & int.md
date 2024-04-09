![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/4ede9430-9229-4e63-9d5d-dfdd08429378)

Chall này khá dễ nên mình skip luôn.Đề nói là output tăng dần thì mình sử dụng set và duyệt qua nó luôn.

```cpp
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    set<int> se;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        se.insert(x);
    }
    cout << se.size() << endl;
    for(auto it = se.begin(); it != se.end();it++){
        cout << *it << " ";
    }
}
```
