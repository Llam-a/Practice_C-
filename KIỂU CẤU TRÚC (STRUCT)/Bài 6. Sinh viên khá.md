![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/9d4df7a8-a0a1-4f69-9df0-77a4db01669f)

![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/163d255d-0ee0-44eb-b1fd-893592f39b37)

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
    for(int i = 0; i < n; i++){
        cin.ignore();
        cin >> s[i];
    }
    for(sinhvien x : s){
        if(x.dc == "Nam Dinh" && x.gpa >= 2.5){
            cout << x << endl;
        }
    }
}
```
