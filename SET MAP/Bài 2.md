![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/38de3ebe-02ce-405a-98f1-ea84f51f4e85)

Bài này cũng dễ. Mình dùng hàm find để tìm x có trong set ko.

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
    int q; cin >> q;
    while(q--){
        int x; cin >> x;
        auto it = se.find(x);
        if(it != se.end()){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}
```

```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    map<int, int>mp;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        mp[x]++;
    }
    int q; cin >> q;
    while(q--){
        int x; cin >> x;
        auto it = mp.find(x);
        if(it != mp.end()){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}

```
``
