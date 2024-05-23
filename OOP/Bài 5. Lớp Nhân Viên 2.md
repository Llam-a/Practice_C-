![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/e366d55e-e631-4fd1-9427-130ba7d1bacb)

![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/bcbc0af2-bf92-4374-bccd-aea75966f6fb)

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
        string res = "";
        stringstream ss(hoten);
        string w;
        while(ss >> w){
            res += toupper(w[0]);
            for(int i = 1; i < w.size(); i++){
                res += tolower(w[i]);
            }
            res += " ";
        }
        res.pop_back();
        hoten = res;
        if(ngaysinh[1] == '/') ngaysinh = "0" + ngaysinh;
        if(ngaysinh[4] == '/') ngaysinh.insert(3,"0");
        if(hd[1] == '/') hd = "0" + hd;
        if(hd[4] == '/') hd.insert(3,"0");
    }
    void in(){
        cout << ma << " " << hoten << " " << gioitinh << " " << ngaysinh << " " << dc << " " << mst << " " << hd << endl;
    }

};
int main(){
    NhanVien s;
    s.nhap();
    s.chuanhoa();
    s.in();
}
```
