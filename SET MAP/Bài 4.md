![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/e752c9ca-7c7c-4b1a-a771-bc6beb679240)

Bài này nó gợi ý là dùng multiset.

```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    multiset<int> se;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        se.insert(x);
    }
    int q; cin >> q;
    while(q--){
        int op,x; cin >> op >> x;
        if(op== 1){
            se.insert(x);
        }else if(op== 2){
            auto it = se.find(x);
            if(it!=se.end()){
                se.erase(it); // xóa qua iterartor,lúc này iterartor đang trỏ đến phần tử x đầu tiên
            }
        }else{
            auto it = se.find(x);
            if(it!=se.end()){
                cout << "YES\n";
            }else{
                cout << "NO\n";
            }
        }
    }

}
```
