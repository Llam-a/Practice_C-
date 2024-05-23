![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/3ac27557-cdf4-45bc-90e0-fe0459f8c9aa)

```cpp
#include<bits/stdc++.h>

using namespace std;
class SinhVien{
private:
    string ma,hoten,lop,ngaysinh;
    double gpa;
public:
    void nhap(){
        ma = "SV001";
        getline(cin, hoten);
        getline(cin, lop);
        getline(cin, ngaysinh);
        cin >> gpa;
    }
    void in(){
        cout << ma << " " <<  hoten << " " << lop << " " << ngaysinh << " " << fixed << setprecision(1) << gpa <<  endl;
    }
    void chuanhoa(){// 2/9/2004 -> 02/09/2004
        if(ngaysinh[1] == '/') ngaysinh = "0" + ngaysinh;
        if(ngaysinh[4] == '/') ngaysinh.insert(3,"0");
    }
};

int main(){
    SinhVien s;
    s.nhap();
    s.chuanhoa();
    s.in();
   
}
```
