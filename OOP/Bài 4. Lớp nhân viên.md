![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/81656ff1-044e-42c4-98f6-ab76f293ca7c)

![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/6be4507a-86af-480a-9826-28e15491b581)

```cpp
#include<bits/stdc++.h>

using namespace std;
class NhanVien{
private:
    string ma,hoten,gioitinh,ngaysinh,hd,dc,mst;
public:
    void nhap(){
        ma = "00001";
        getline(cin, hoten);
        getline(cin, gioitinh);
        getline(cin, ngaysinh);
        getline(cin, dc);
        getline(cin, mst);
        getline(cin, hd);
    }
    void chuanhoa(){
        
    }
    void in(){
        cout << ma << " " << hoten << " " << gioitinh << " " << ngaysinh << " " << dc << " " << mst << " " << hd << endl;
    }

};
int main(){
    NhanVien s;
    s.nhap();
    s.in();
}
```
``````
