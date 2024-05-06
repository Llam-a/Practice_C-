![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/2d3cf5ab-bb99-4426-b563-6e59fc75be89)

Bài này khá dễ, dùng size() hoặc length. Nếu mà size() hoặc length của xâu chi hết 2 thì NOT FOUND còn ngược lại thì in s[s.size() / 2] hoặc s[length / 2].

```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    int length = s.length();

    if(length % 2 == 0){
        cout << "NOT FOUND" << endl;
    }else{
        int m = length / 2;
        cout << s[m] << endl;
    }
    return 0;
}
```
