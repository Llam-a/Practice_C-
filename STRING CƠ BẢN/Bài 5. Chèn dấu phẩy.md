![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/fe24a6f5-2f5c-4e08-b817-4019699381ad)

Bài này idea là mình sẽ duyệt từ cuối, sau đó thì đếm nếu đếm đủ chia hết cho 3 thì mình add thêm dấu ','.Cuối cùng thì mình dùng hàm reverse để lật ngược lại nữa.

Nhưng có trường hợp là 123456, vậy thì khi mà duyệt tới số 1 , nó sẽ duyệt đủ 3 số rồi add dấu ',' là sai (,123,456). Nên lúc duyệt phải thêm điều kiện `i != 0`.

```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    string res = "";
    int dem = 0;
    for(int i = s.size() - 1; i >= 0; i--){
        res += s[i];
        ++dem;
        if(dem % 3 == 0 && i != 0){
            res += ',';
        }
    }
    reverse(res.begin(), res.end());
    cout << res << endl;
}
```
