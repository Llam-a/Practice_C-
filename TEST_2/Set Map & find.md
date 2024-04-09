![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/b7baaeca-0e01-42c1-8756-5c700781d220)

Đối với set thì các phần tử chỉ xuất hiện 1 lần hoặc 0 lần, nên mình sẽ lưu các phần tử mảng B[] ở trong set, con A[] thì lưu ở mảng.

Sau đó thì ta sẽ duyệt mảng A[] `for(int x : a)`.Với điều kiện `if(se.count(x))`.

```cpp
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    int a[n],b[m];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    set<se> se;
    for(int i=0; i<m; i++){
        cin >> b[i];
        se.insert(b[i]);
    }
    for(int x : a){
        if(se.count(x)){
            cout << "28tech" << " ";
        }else{
            cout << "29tech" << " ";
        }
    }
}
```


