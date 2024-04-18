
![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/5aac6b6e-241c-48f6-b05e-b2fb7e3a971f)

```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){
    map<char,int> mp;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        char x; cin >> x;
        mp[x]++;
    }
    auto it1 = mp.begin();
    cout << it1->first << " " << it1->second << endl;
    cout << endl;
    auto it2 = mp.rbegin();
    cout << it2->first << " " << it2->second << endl;
    cout << endl;
    for(auto it3 = mp.begin(); it3 != mp.end();it3++){
        cout << it3->first << " " << it3->second << endl;
    }
    cout << endl;
    for(auto it4 = mp.rbegin(); it4 != mp.rend();it4++){
        cout << it4->first << " " << it4->second << endl;
    }

}
```
