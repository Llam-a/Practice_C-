![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/30f02803-0817-488f-b039-2fe2bfd685c4)


Bài này mình ko cần stringstream, mình làm hàm chuẩn hóa hoa và thường, mỗi lần in ra thì dùng hàm để check rồi thay đồi hoa thường thôi.


```cpp
#include<bits/stdc++.h>

using namespace std;
string inhoa(string s){
    for(int i=0; i<s.length();i++){
        s[i] = toupper(s[i]);
    }
    return s;
}
string inthuong(string s){
    for(int i=0; i<s.length();i++){
        s[i] = tolower(s[i]);
    }
    return s;
}
int main(){
    string s; 
    getline(cin, s);
    cout << inhoa(s) << endl << inthuong(s) << endl;
}
```
