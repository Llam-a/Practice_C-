![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/0a0095d7-9dd4-4e10-80ed-f28acbf4fcd4)

Challenge này, mình sẽ sử dụng map kết hợp với dạng bài mảng đánh dấu.Ban đầu thì tạo hàm bool check để kiểm tra điều kiện số đẹp.Rồi sau đó mình lưu các phần tử vào mảng a[]. Tạo map coi như nó là mảng lớn để mình có thể đánh dấu tần suất của các phần tử trong mang a[].Sau đó thì duyệt x qua mảng a[].Với điều kiện là tần suất là khác 0.

/*Sau khi in xong thì phải cho tần suất về 0 để tránh in lại lần nữa*/

```cpp
#include<bits/stdc++.h>
using namespace std;
bool check(long long n){
    while(n){
        int digit = n % 10;
        if(digit != 0 && digit != 2 && digit != 4 && digit != 8 && digit != 6)
            return false;
            n/=10;
    }return true;
}

int main(){
    int n; cin >> n;
    long long a[n];
    map<long long, int> mp;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(check(a[i])){
            mp[a[i]]++;
        }
    }
    for(long long x : a){
        if(mp[x] != 0 ){
            cout << x << " " << mp[x] << endl;
            mp[x] = 0;
        }
    }
}
```
