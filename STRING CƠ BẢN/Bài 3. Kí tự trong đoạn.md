![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/1386fc69-50df-4324-bb16-f379b1a11571)

Bài này khá dễ, dùng hàm isdigit để lấy số ra, nhưng lúc này các số là trong chuỗi sẽ là digit, nó khác với number.Ví dụ "0abc1" thì tổng nó sẽ là 97, vì trong bảng mã ascii "0" là 48, "1" là 49. Nên để cộng 2 số trong chuỗi thì ta phải trừ đi '0'.

```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    int sum = 0;
    for(char c : s ){
        if(isdigit(c)){
            sum += c - '0';
        }
    }
    cout << sum << endl;
}
```
