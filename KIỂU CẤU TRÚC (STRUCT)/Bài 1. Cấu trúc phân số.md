![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/cbabc265-8447-4343-8c24-f5788ac93005)


Đề yêu cầu ta rút gọn phan số, tính tổng và hiệu của hai phân số.Ở bài này mình dùng hàm tạo để làm.

- Hàm tạo để nhập

```cpp
friend istream& operator >> (istream& in, Phanso& x){
        in >> x. tu >> x.mau;
        return in;
    }
```

- Hàm tạo đề in, vì đề yêu cầu là phân số tối giản nên mình sử dụng hàm gcd để tìm mẫu chung nhỏ nhất, sau đó đề còn yêu cầu là nếu mẫu số âm thì dấu - ở trên tử, thì ta sẽ xét xem mẫu có âm hay ko rồi nhân -1 cho tử và mẫu.

```cpp
friend ostream& operator << (ostream& out, Phanso x){
        long long mc = __gcd(x.tu, x.mau);
        x.tu /= mc;
        x.mau /= mc;
        if(x.mau < 0){
            x.tu *= -1;
            x.mau *= -1;
        }
        out << x.tu << '/' << x.mau << endl;
        return out;
    }
```

Còn lại làm tổng và hiệu 2 phân số

```cpp
friend Phanso operator + (Phanso a, Phanso b){
        Phanso tmp;
        tmp.tu = a.tu * b.mau + b.tu * a.mau;
        tmp.mau = a.mau * b.mau;
        return tmp;
    }
    friend Phanso operator - (Phanso a, Phanso b){
        Phanso tmp;
        tmp.tu = a.tu * b.mau - b.tu * a.mau;
        tmp.mau = a.mau * b.mau;
        return tmp;
    }
```


```cpp
#include<bits/stdc++.h>

using namespace std;
struct Phanso{
    long long tu, mau;
    friend istream& operator >> (istream& in, Phanso& x){
        in >> x. tu >> x.mau;
        return in;
    }
    friend ostream& operator << (ostream& out, Phanso x){
        long long mc = __gcd(x.tu, x.mau);
        x.tu /= mc;
        x.mau /= mc;
        if(x.mau < 0){
            x.tu *= -1;
            x.mau *= -1;
        }
        out << x.tu << '/' << x.mau << endl;
        return out;
    }
    friend Phanso operator + (Phanso a, Phanso b){
        Phanso tmp;
        tmp.tu = a.tu * b.mau + b.tu * a.mau;
        tmp.mau = a.mau * b.mau;
        return tmp;
    }
    friend Phanso operator - (Phanso a, Phanso b){
        Phanso tmp;
        tmp.tu = a.tu * b.mau - b.tu * a.mau;
        tmp.mau = a.mau * b.mau;
        return tmp;
    }
};

int main(){
    Phanso a, b;
    cin >> a >> b;
    cout << a << b << a + b << a - b;
}
```
