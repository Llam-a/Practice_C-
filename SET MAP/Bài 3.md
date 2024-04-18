![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/bfb7b393-3d6a-41b8-851d-e49bf02dbc17)

Bài này cũng đã hướng dẫn rồi.

Đầu tiên là nhập mảng a, tạo set.Sau đó thì sử dụng hàm find() để tìm trong set có xuất hiện phần tử của a chưa, rồi in ra.Cuối cùng lưu phần tử đó vào set.

```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    set<int> se;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(se.find(a[i]) == se.end()){
            cout << a[i] << " ";
            se.insert(a[i]);
        }
    }

}
```
