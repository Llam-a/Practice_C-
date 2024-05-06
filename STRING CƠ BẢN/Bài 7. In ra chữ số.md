![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/268695cf-c76d-44f0-adf6-4eb2ad112c3a)

Bài này dễ, dùng hàm đễ check chữ và số rồi add thêm vào thôi.

```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    string digit; string letter;
    for(char c : s){
        if(isdigit(c)){
            digit += c;
        }else{
            letter += c;
        }
    }
    cout << digit << endl;
    cout << letter << endl;
}
```
