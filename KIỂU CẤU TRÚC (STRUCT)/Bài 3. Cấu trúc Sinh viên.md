![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/4e780b97-206c-450a-8120-276cda3c9612)

![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/83dec6b8-a1fc-4275-a9cf-9428fa794a03)

```cpp
#include<bits/stdc++.h>

using namespace std;
struct sinhvien{
    string ten,ns,dc;
    int toan,ly,hoa,tong;
    friend istream& operator >> (istream& in, sinhvien& x){
        getline(in, x.ten);
        getline(in, x.ns);
        getline(in, x.dc);
        in >> x.toan >> x.ly >> x.hoa;
        x.tong = x.toan + x.ly + x.hoa;
        return in;
    }
    friend ostream& operator << (ostream& out, sinhvien x){
        out << x.ten << " " << x.ns << " " << x.dc << " " << x.tong << (x.tong >= 24 ? " DO" : " TRUOT");
        return out;
    }
    void intk(){
        cout << ten << " " << ns << " " << dc << " " << tong << endl;
    }
};
int main(){
    int n; cin >> n;
    vector<sinhvien>s(n);
    int _max = 0;
    for(int i = 0; i < n; i++){
        cin.ignore();
        cin >> s[i];
        _max = max(_max, s[i].tong);
    }
    cout << "DANH SACH THU KHOA :" << endl;
    for(int i = 0; i < s.size(); i++){
        if(s[i].tong == _max){
            s[i].intk();
        }
    }
    cout << "KET QUA XET TUYEN:" << endl;
    for(sinhvien x : s){
        cout << x << endl;
    }
}
```
