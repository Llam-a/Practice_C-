![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/267d3800-a22d-4f5b-9b2a-e009242193fd)

Bài này mình sẽ chuẩn hóa hết sang thường, sau đó thì cho hết vào set, để nó sẽ lọc những từ xuất hiện nhiều lần, sau đó thì kiểm tra size có bằng 26 ko.

```cpp
#include<bits/stdc++.h>

using namespace std;
void inthuong(string &s){
    for(char &c : s){
        c = tolower(c);
    }
}
int main(){
    string s; cin >> s;
    set<char> se;
    inthuong(s);
    for(char c : s){
        se.insert(c);
    }
    if(se.size() == 26){
        cout << "YES";
    }else{
        cout << "NO";
    }
}}
```
