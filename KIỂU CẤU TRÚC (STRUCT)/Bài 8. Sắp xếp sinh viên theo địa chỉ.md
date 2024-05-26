![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/38f7d672-1f85-4441-8d9a-8861cc75e561)

![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/990d2438-2ac9-49d1-8309-3946c511bf75)

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
    if(a.dc != b.dc){
        return a.dc < b.dc;
    }else{
        return a.gpa > b.gpa;
    }
}
int main(){
    int n; cin >> n;
    vector<sinhvien>s(n);
    for(int i = 0; i < n; i++){
        cin.ignore();
        cin >> s[i];
    }
    sort(s.begin(), s.end(), cmp);
    for(sinhvien x : s){
        cout << x << endl;
    }
}
```
