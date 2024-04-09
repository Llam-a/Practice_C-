![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/54a84d62-eaea-4074-b27a-9097a1a8cb30)

Bài này mình dùng map để lưu <key,value>.Còn để tìm tần suất lớn nhất, thì ta cứ tạo 1 biến ts tạm, r cứ sử dụng hàm max với ts tạm đó với từng value khi duyệt map.Còn lại là kí tự nào thỏa mãn tần số lớn nhất đó, thì ta sẽ duyệt với tần số lớn nhất ta tìm được, value nào bằng nó thì cout ra key tương ứng thôi.

```cpp
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<char, int> mp;
    int n; cin >> n;
    for(int i=0; i<n; i++){
        char c; cin >> c;
        mp[c]++;
    }
    int max_ts = 0;
    for(auto &it : mp){
        max_ts = max(max_ts,it.second);
    }
    cout << max_ts << endl;
    for(auto &it : mp){
        if(max_ts == it.second){
            cout << it.first << " ";
        }
    }
}
```
