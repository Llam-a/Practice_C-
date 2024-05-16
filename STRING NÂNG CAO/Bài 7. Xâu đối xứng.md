![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/d5713708-99f4-462a-9b7b-c9a3f1302cc0)

Bài này dễ, dùng hàm reverse.

```cpp
#include <bits/stdc++.h>
#define se second
#define fi first
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    string s; cin >> s;
    string t = s;
    reverse(t.begin(), t.end());
    if(s == t) cout << "YES";
    else cout << "NO";
}
```
