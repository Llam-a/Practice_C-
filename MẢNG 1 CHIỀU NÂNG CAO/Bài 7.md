![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/f7f3111c-2c34-400b-9561-62885868800c)


Bài này khá dễ, mình sẽ dùng vector. Đầu tiên là kiểm tra các số chẵn và lẻ r push_back vào 2 vector khác nhau. Sau đó tạo 1 vector khác dể insert end().

```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    vector<int> odd,even,res;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int x : a){
        if(x % 2 != 0){
            odd.push_back(x);
        }
    }
    sort(odd.begin(),odd.end(),greater<int>());

    for(int x : a){
        if(x % 2 == 0){
            even.push_back(x);
        }
    }
    sort(even.begin(),even.end());

    res.insert(res.end(),odd.begin(),odd.end());
    res.insert(res.end(),even.begin(),even.end());

    for(int x : res){
        cout << x << " ";
    }

}
```
