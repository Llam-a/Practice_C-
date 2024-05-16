![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/93d54e5e-4a82-49aa-86f8-72556ed9329f)

```cpp
#include <bits/stdc++.h>
#define se second
#define fi first
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    string a, b; cin >> a >> b;
    set<int>s, t;
    for(char x : a)
    {
        if(b.find(x) == string::npos) s.insert(x);
    }
    for(char x : b)
    {
        if(a.find(x) == string::npos) t.insert(x);
    }
    for(char x : s) cout << x;
    cout << endl;
    for(char x : t) cout << x;
}
```
