![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/72630bc4-76c3-4516-8bf4-25449445c60b)

Bài này khá dễ, so sánh số sau va trước, i với i - 1.

```
#include <bits/stdc++.h>

using namespace std;

bool check(int a[], int n){
    for(int i = 1; i < n; i++){
        if(a[i] <= a[i - 1]){
            return false;
        }
    }
    return true;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(check(a, n)){
        cout << "YES\n" << endl;
    }else{
        cout << "NO\n" << endl;
    }
}
```

  
