![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/740020cb-6e6c-4bf3-a3ea-6d2265061c84)

Challenge này khá dễ, nhưng mà mình khá ngáo khúc cuối,đhs, duyệt từ dưới lên rồi, xuống dưới thêm cái hàm reverse.@@.Nhưng mà mình xóa đi r output nó vẫn không ra giống format @@. Nên là cứ fix, không dám sumbit. Con cặc đụ má cay vcl.

```cpp
#include<bits/stdc++.h>

using namespace std;

bool check(long long n){
    if(n < 2) return false;
    for(int i  = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return false;
    }
    return true;
}
int main(){
    vector<int> v1, v2;
    long long n;
    while(cin >> n){
        if(check(n)){
            v1.push_back(n);
        }else{
            v2.push_back(n);
        }
    }
    for(int i = v1.size() -1; i >= 0; i--){
        cout << v1[i] << " ";
    }
    cout << endl;
    for(int x : v2) cout << x << " ";
}
```
