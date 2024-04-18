![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/1770d2e1-8290-4d1a-8cab-56344578a221)


Theo đề là in ra số lượng cặp tọa độ khác nhau. Vậy thì theo gợi ý thì mình dùng map lưu pair.Pair sẽ lưu hoành độ và tung độ.
```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    map<pair<int,int>,int> m;
    for(int i=0; i<n; i++){
        int x,y; cin >> x; cin >> y;
        m[{x,y}]++;
    }
    cout << m.size() << endl;
}
```
