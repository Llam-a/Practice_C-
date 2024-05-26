![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/0398e731-a522-4aed-b934-ef77e5207885)

![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/9903f6e0-150c-45b8-9587-16c746c67df6)

Bài này giống bài 3, khác ở chỗ là sắp xếp sinh vien theo gpa giảm dần, nếu cùng gpa thì sắp xếp theo thứ tự xếp trước trong danh sách.

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
    return a.gpa > b.gpa;
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
