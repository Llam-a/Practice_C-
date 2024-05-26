![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/f58377e6-d97f-40cf-aff7-3d65b0f42ea8)

![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/06b49e7b-6334-440f-986e-4ff522b82203)

Bài này giống bài 4

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
bool cmp(sinhvien a, sinhvien b){
    return a.ten < b.ten;
}
int main(){
    int n; cin >> n;
    vector<sinhvien>s(n);
    for(int i = 0; i < n; i++){
        cin.ignore();
        cin >> s[i];
    }
    stable_sort(s.begin(), s.end(),cmp);
    for(sinhvien x : s){
        cout << x << endl;
    }
}
```
