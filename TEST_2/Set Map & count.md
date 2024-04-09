![Screenshot 2024-04-09 111128](https://github.com/Llam-a/Practice_Cpp/assets/115911041/078d5b5a-0665-4659-8adb-8b6871b31113)


Challenge này khá giống challenge trước, nhưng lần này mình sẽ lưu mảng B[] trong map. Và lúc duyệt mảng A[] qua x , với mỗi phần tử x in ra `value` của  `key` 
 x trong map. Giá trị không tồn tại `key` x sẽ in ra `0`.

/*map(key,value)*/

```cpp
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;cin >> n >> m;
    int a[n],b[m];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    map<int, int> mp;
    for(int i = 0; i<m; i++){
        cin >> b[i];
        mp[b[i]]++;
    }
    for(int x : a){
        cout << mp[x] << " ";
    }
}
```
