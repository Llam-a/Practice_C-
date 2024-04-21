![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/088cf7dc-7c57-432b-abc4-02e15624ce0c)


Bài này khá dễ. Tạo 2 hàm : hàm gcd, và hàm duyệt các số có UCLN = 1 hay ko(nếu gcd của 2 số là 1 ) là cặp số nguyên tố cùng nhau.

```cpp
#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b){//sử dụng tiên đề ơ-clit
    if(b == 0 ) 
        return a;
    return gcd(b, a % b);
}

int cntp(int a[], int n){
    int count  = 0;
    for(int i = 0; i < n;i++){
        for(int j  = i + 1; j < n; j++){
            if(gcd(a[i], a[j]) == 1){
                ++count;

            }
        }
    }
    return count;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int res = cntp(a,n);
    cout << res << endl;

}
```
