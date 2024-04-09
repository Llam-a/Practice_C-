![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/b7baaeca-0e01-42c1-8756-5c700781d220)


Idea làm chall này của mình là sẽ ban đầu thì mình nhập mảng A[], còn mảng B[] mình sẽ nhập vào set.Sau đó thì mình duyệt mảng A[], và sử dụng hàm count của set lúc này là có các phần tử mảng B[].`if(se.count(x))`

Bởi vì, các phần tử trong set chỉ xuất hiện 1 hoặc 0 lần. Nên mình xét mảng A[] theo B[]

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


