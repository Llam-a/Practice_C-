![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/8b044140-cc63-4e16-a61b-7cc0a5005acb)

Bài này khá dễ, sử dụng công thức tính số phức là xong

```cpp
#include<bits/stdc++.h>

using namespace std;
struct SoPhuc{
    long long ao, thuc;
    friend ostream& operator << (ostream& out, SoPhuc x){
        out << x.thuc << " " << x.ao;
        return out;
    }
    friend istream& operator >> (istream& in, SoPhuc &x){
        in >> x.thuc >> x.ao;
        return in;
    }
    friend SoPhuc operator + (SoPhuc a, SoPhuc b){
        SoPhuc tmp;
        tmp.thuc = a.thuc + b.thuc;
        tmp.ao = a.ao + b.ao;
        return tmp;
    }
    friend SoPhuc operator - (SoPhuc a, SoPhuc b){
        SoPhuc tmp;
        tmp.thuc = a.thuc - b.thuc;
        tmp.ao = a.ao - b.ao;
        return tmp;
    }
    friend SoPhuc operator * (SoPhuc a, SoPhuc b){
        SoPhuc tmp;
        tmp.thuc = a.thuc * b.thuc - a.ao * b.ao;
        tmp.ao = a.thuc * b.ao + a.ao * b.thuc;
        return tmp;
    }
};
int main(){
    SoPhuc a,b;
    cin >> a >> b;
    cout << a + b << endl << a - b << endl << a * b;
}
```
