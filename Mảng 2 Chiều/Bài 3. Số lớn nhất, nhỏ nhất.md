![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/4438234d-896a-44d0-b718-cd91ecc22840)

```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m; cin >> n >> m;
    int a[n][m];
    int _max = INT_MIN;
    int _min = INT_MAX;
    for(int i=0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin >> a[i][j];
            _max = max(_max, a[i][j]);
            _min = min(_min, a[i][j]);
        }
    }
    cout << _min << endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j] == _min){
                cout << i + 1 << " " << j + 1 << endl;
            }
        }
    }
    cout << _max << endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j] == _max){
                cout << i + 1 << " " << j + 1 << endl;
            }
        }
    }
}
```
