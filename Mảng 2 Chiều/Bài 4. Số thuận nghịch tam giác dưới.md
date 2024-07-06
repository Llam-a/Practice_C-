![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/afbad10d-56a4-4e79-bbdf-3c28f9ed15b4)

```cpp
#include<bits/stdc++.h>

using namespace std;
bool check(int n){
    int tmp = n; int ans = 0;
    while(n){
        ans = ans * 10 + n % 10;
        n /= 10;
    }
    return ans == tmp;
}
int main(){
    int n,m;cin >> n >> m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    int dem = 0;
    for(int i = 0;i < n; i++){
        for(int j = 0;j <= i; j++){
            if(check(a[i][j])){
                ++dem;
            }
        }
    }
    cout << dem << endl;

}
```
