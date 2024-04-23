![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/b6134fa5-1273-4b63-8101-a80c6efc21d7)


Bài này khá dễ, muốn in theo thứ tự trong mảng thì duyệt qua mảng thôi.

```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];    
    map<int,int> mp;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }    
    for(int x : a){
        mp[x]++;
    }
    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;
    for(int x : a){
        if(mp[x] !=0){
            cout << x << " " << mp[x] << endl;
            mp[x] = 0;
        }
    }
}
```
