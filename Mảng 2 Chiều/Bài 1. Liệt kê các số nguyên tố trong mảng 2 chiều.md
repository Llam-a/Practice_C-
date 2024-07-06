![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/aa6a29f5-b2c2-4721-a38e-304632096480)

```cpp
#include<bits/stdc++.h>

using namespace std;
bool check(int n){
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int n,m; cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(check(a[i][j])){
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }

}
```
