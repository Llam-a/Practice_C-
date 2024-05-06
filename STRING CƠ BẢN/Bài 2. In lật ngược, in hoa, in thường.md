![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/32d991e2-89ff-4552-9cc3-d6cc20588a26)

Bài này dễ, lật ngược thì mình duyệt từ cuối đến đầu, viết thường và viết hoa thì sử dụng 2 hàm tolower và toupper đi.

```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    for(int i = s.size() - 1; i >= 0; i--){
        cout << s[i] ;
    }
    for(char c : s){
        cout << (char)tolower(c);
    }
    cout << endl;
    for(char c : s){
        cout << (char)toupper(c);
    }
    cout << endl;
}
```
