![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/5eb359b8-96c8-4726-ba3f-8237b0799d13)

![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/928a3293-2ac6-44c2-8055-982725159129)

Bài này mình sử dụng map để đếm tần suất địa chỉ.

```cpp
#include<bits/stdc++.h>

using namespace std;
struct sinhvien{
    string ten,ns,dc;
    double gpa;
    friend istream& operator >> (istream& in, sinhvien& x){
        getline(in , x.ten);
        getline(in , x.ns);
        getline(in , x.dc);
        in >> x.gpa;
        return in;
    }
    friend ostream& operator << (ostream& out, sinhvien x){
        out << x.ten << " " << x.ns << " " << x.dc << " " << fixed << setprecision(2) << x.gpa;
        return out;
    }
};
int main(){
    int n; cin >> n;
    vector<sinhvien>s(n);
    map<string,int>mp;
    int ans = 0;
    for(sinhvien &x : s){
        cin.ignore();
        cin >> x;
        mp[x.dc]++;
        ans = max(ans, mp[x.dc]);
    }
    for(auto x : mp){
        if(x.second == ans){
            cout << x.first << endl;
        }
    }
}
```
