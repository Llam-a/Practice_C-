![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/7cb8ad5d-fcc2-4c70-a0aa-b0adaa5984c2)

![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/e742ae8a-b4aa-4688-a414-67f9f9a144d6)

Bài này dễ, chỉ cần in những thằng >= 1 thôi.

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
int main(){
    int n; cin >> n;
    vector<sinhvien>s(n);
    for(int i = 0; i < n; i++){
        cin.ignore();
        cin >> s[i];
    }
    for(sinhvien x : s){
        if(x.gpa >= 1){
            cout << x << endl;
        }
    }
}
``
