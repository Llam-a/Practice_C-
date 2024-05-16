![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/67013ceb-a51f-4d9a-ba21-5dab06af3370)

Bài này chỉ cần giải quyết từng yêu cầu của đề, mình sử dụng map duyệt để lưu tần suất. Sau đó đi tìm tần suất lớn nhất và nhỏ nhất.Cuối cùng là xử lí yêu cầu của đề, `cùng tần suất lớn nhất thì in ra thứ tự từ điền lớn nhất, còn cùng tần suất lớn nhất thì in ra thứ tự từ điển nhỏ nhất`.

```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    map<char,int> mp;
    for(char c : s){
        mp[c]++;
    }
    int _max = INT_MIN; int _min = INT_MAX;
    for(auto it : mp){
        _max = max(_max, it.second);
        _min = min(_min, it.second);
    }
    for(auto it = mp.rbegin(); it != mp.rend();it++){
        if(it->second == _max){
            cout << it->first << " " << _max << endl;
            break;
        }
    }
    for(auto it = mp.rbegin(); it != mp.rend();it++){
        if(it->second == _min){
            cout << it->first << " " << _min << endl;
            break;
        }
    }
}
```
