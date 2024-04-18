![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/89215941-ee1c-48a8-869e-a8d0374150e1)

Bài này dễ.

```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    set<int> se;
    for(int i = 0 ; i < n; i++){ 
        int x; cin >> x;
        se.insert(x);
    }
    cout << se.size() << endl;
}
```

```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    map<int,int> m;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        m[x]++;
    }
    cout << m.size() << endl;
}
```

