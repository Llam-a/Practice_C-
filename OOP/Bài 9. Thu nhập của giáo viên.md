![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/ad4aad34-37c6-402a-8469-0c6ba3126a0e)

![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/54020743-39b7-4d87-ae6f-eac99f43ad22)


```cpp
#include<bits/stdc++.h>

using namespace std;
class giaovien{
    private: 
        string mgv, ten;
        long long lcb;
    public:
        friend istream& operator >> (istream& in, giaovien& x){
            getline(in, x.mgv);
            getline(in, x.ten);
            in >> x.lcb;
            return in;
        }
        friend ostream& operator << (ostream& out, giaovien x){
            //tach chuc vu
            string cv = x.mgv.substr(0,2);
            //tach bac luong
            int bl = stoi(x.mgv.substr(2,2));
            long long phucap = 0;
            if(cv == "HT") phucap += 2e6;
            else if(cv == "HP") phucap += 9e5;
            else phucap += 5e5;

            long long thunhap = x.lcb *  bl + phucap;

            out << x.mgv << " " << x.ten << " " << bl << " " << thunhap;
            return out;
        }
};
int main(){
    giaovien x; cin >> x;
    cout << x << endl;
}
```
