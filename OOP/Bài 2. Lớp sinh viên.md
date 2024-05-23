![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/2a31ac54-c588-477c-9df5-1f0eb33d0724)

```cpp
#include<bits/stdc++.h>

using namespace std;
class SinhVien{
private:
    string hoten,ngaysinh;
    float d1,d2,d3;
    float tong;
public:
    void nhap(){
        getline(cin, hoten);
        getline(cin, ngaysinh);
        cin >> d1 >> d2 >> d3;
        cin.ignore();
    }
    void tinh(){
        tong = d1 + d2 + d3;
    }
    void in(){
        cout << hoten << " " << ngaysinh << " " << fixed << setprecision(1) << tong << endl;
    }
};

int main(){
    SinhVien s;
    s.nhap();
    s.tinh();
    s.in();
    return 0;
    
}
```
