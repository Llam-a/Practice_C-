![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/ccdf764b-d855-4874-b138-0fef9707c7a7)

Bài này thì dùng 2 set để lưu giao và hợp của 2 string thôi.Gia thì lưu kí tự a xuất hiện ở b, còn hợp thì mình cứ lưu hết vào

```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){
    string a,b; cin >> a >> b;
    set<int> giao, hop;
    for(char c : a){
        if(b.find(c) != string::npos){
            giao.insert(c);
        }
        hop.insert(c);
    }
    for(char c : b){
        hop.insert(c);
    }
    for(char c : giao){
        cout << c ;
    }
    cout << endl;
    for(char c : hop){
        cout << c ;
    }
}
```
