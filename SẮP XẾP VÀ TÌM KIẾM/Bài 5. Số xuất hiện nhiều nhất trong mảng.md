![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/878f8602-cdf2-4632-a296-38b8786f8ca7)


```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    map<int, int> mp;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        mp[x]++;
    }
    int soluong = 0;
    for(auto x : mp){
        soluong = max(soluong,x.second);// tìm tần suất lớn nhất
    }
    for(auto x : mp){
        if(x.second == soluong){// nếu cùng giá trị tần suất thì in số nhỏ nhất
            cout << x.first << " " << x.second << endl;
            break; // tránh việc in ra tất cả ts có cùng giá trị
        }// nếu có số chỉ có một số có tần suất lớn nhất thì in ra thôi
    }
}
```
