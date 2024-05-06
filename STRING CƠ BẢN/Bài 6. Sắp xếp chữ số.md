![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/d0b3a010-3f84-4781-a99d-1cad5a84de6c)

Để mà xóa trường hợp có số 0 ở đầu khi mình sort, thì mình sẽ check xem size() có còn 2 chữ số trở lên ko và `s[0] = '0'` thì s.erase(0,1), xóa 1 kí tự từ chỉ số 0. Nghĩ là, chừng nào còn 2 kí tự trở lên mà kí tự đầu là số 0 thì mình xóa đi, còn có 1 số 0 thì mình ko xóa.

```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    sort(s.begin(), s.end());
    while(s.size() > 1 && s[0] == '0'){
        s.erase(0,1);
    }
    cout << s << endl;
}
```
