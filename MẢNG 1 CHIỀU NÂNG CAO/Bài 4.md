![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/b229479d-184e-4bc2-b55a-73aa50c4a9a5)

Bài này yêu càu ta là xem nhân viên có thể trả lại tiền cho khách hay không nếu ban đầu anh ta không có tiền  và bán vé theo đúng thứ tự,khách chỉ cầm các 1 trong các tờ 25 , 50 hoặc 100.

Vậy thì nếu muốn trả lại tiền cho khách thì cần tờ 25 và tờ 50, tờ 100 không quan trọng.

Ví dụ khách đưa 25 thì ko cần thối, `++dem25`.

Khách đưa 50 thì phải có ít nhất 1 tờ 25(`--dem25`),không có tờ 25 nào thì false luôn.

Còn khách đưa tờ 100 thì phải có ít nhất 3 tờ 25, 1 tờ 50.Vì có thể thối theo 3 tờ 25, hoặc 1 tờ 25 và 1 tờ 50.Nếu tổng số tiền < 75 thì false `(25 * dem25 + 50 * dem50 < 75)`

Nhưng nếu ta đưa hết 3 tờ 25 thì khách sau đưa tờ 50 ta sẽ không thối được vì vậy phải chia trường hợp là số tờ 50 ta có khác hoặc bằng 0.Khác 0 thì `--dem25;--dem50.`.Hoặc ko có tờ 50 thì `dem25 -=3;`

```cpp
#include<bits/stdc++.h>

using namespace std;
bool check(int a[], int n){
    int dem25 = 0; int dem50 = 0;
    for(int i=0; i<n; i++){
        if(a[i] == 25) dem25++;
        else if (a[i] == 50){
            if(dem25 == 0) return false;
                --dem25;
                ++dem50;
        }else{
            if(dem25 == 0 || (dem25 * 25 + dem50 * 50 < 75)) 
                return false;
            if(dem50 != 0){
                --dem25;
                --dem50;
            }else{
                dem25 -=3;
            }
        }
    }
    return true;
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    if(check(a,n)){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}
```
