![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/90d607c6-cbd9-4af1-a1d0-956f69d95299)

Để chuyển từ decimal sang hexadecimal, thì ta sẽ chia dư cho 16 tới khi thương là 0. Từ đó lấy ngược lên của số dư.

![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/c1ac14db-94e9-4f1b-b226-6b3f1a1da17b)

Dưa theo cách chuyển tử decimal sang hexadecimal, mình chuyển khai code. Khi mà số dư > 10, thì ta sẽ trừ cho 10 và cộng cho kí tự `a`. Ví dụ dư là 15, thì theo hexadecimal thì là F, nên khi ta trừ cho 10 là còn 5 sau đó cộng cho kí tự 'a' thì nó sẽ nhảy lên là kí tự `F`.

Còn với số dư nó bé hơn 10 thì mình sẽ cộng cho kí tự '0'.Ví dụ với 5 thì sẽ là kí tự `5`.

Sau khi chuyển hết xong, thì mình dùng hàm reverse để lấy ngược lên.

```cpp
#include<bits/stdc++.h>
using namespace std;
vector<char> convert_number(long long n){
    vector<char> hex;
    if(n == 0){
        hex.push_back('0');
        return hex;
    }while(n){
        int r  = n % 16;
        char hex_char;
        if(r < 10){
            hex_char = r + '0';
        }else{
            hex_char = r - 10 + 'a';
        }
        hex.push_back(hex_char);
        n/=16;
    }
    reverse(hex.begin(), hex.end());
    return hex;

}

int main(){
    int t; cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<char> res = convert_number(n);
        for(char x : res){
            cout << x;
        }
        cout << endl;
    }
    return 0;
}

```
