![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/802bd2be-8138-40ea-9625-be85e0f2188c)

```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;cin >> s;
    map<char, int> mp;
    for(char x : s){
        mp[x]++;
    }
    for(auto x : mp){
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;
    for(auto x : s){
        if(mp[x] != 0){
            cout << x << " " << mp[x] << endl;
            mp[x] = 0;
        }
    }

}
```
