![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/2156ebb5-4dfb-4ac7-9df4-461bf0e56452)

Bài nãy giống những bài xét cặp, khác chút là mình làm xét cặp.

```cpp
#include<bits/stdc++.h>

using namespace std;
bool check(string s){
    for(int i = 1; i < (int)s.size(); i++){
        if(abs(s[i] - s[i-1]) != 1){
            return false;
        }
    }
    return true;
}
int main(){
    string s; cin >> s;
    if(check(s)){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}
 
```
