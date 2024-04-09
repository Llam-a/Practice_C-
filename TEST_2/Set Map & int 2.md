![Screenshot 2024-04-09 093146](https://github.com/Llam-a/Practice_Cpp/assets/115911041/46de4c4e-0cdc-4029-b6ed-c2331fdbb52d)

Chall này nó ngược lại bài trước, thì mình sẽ sử dụng iterator cho nó chạy từ `rbegin()` đến `rend()` là xong.

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
    for(auto it = se.rbegin(); it != se.rend();it++){
        cout << *it << " ";
    }
}
```
