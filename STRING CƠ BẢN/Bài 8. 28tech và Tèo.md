![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/17eb6d99-3417-47bf-9d68-4ada3340c935)

Bài này thì mình duyệt xem xâu có kí tự nào trong 28tech ko.Có thì thêm vào mảng rỗng

```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    string res = "";
    for(char c : s){
        if(c != '2' && c != '8' && c != 't' && c != 'e' && c != 'c' && c != 'h'){
            res += c;
        }
    }
    if(res.empty()){
        cout << "EMPTY" << endl;
    }else{
        cout << res << endl;
    }
}
```
