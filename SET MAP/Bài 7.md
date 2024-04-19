![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/65dddec1-5706-4672-ae07-2ea288af616b)

Input,Output format:

![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/b077c2d0-2ae0-4b1c-ace1-4b33ce6d0fed)

Bài này bắt ta nhập thành bảng, thì ta sử dụng 2 vòng for lồng nhau để nhập i dòng và j cột thôi.

Tiếp theo yêu cầu của đề là tìm số xuất hiện ở mọi dòng.Cái này mình sẽ sử dụng map và set.Map để lưu key và value của các phần tử còn set để mỗi lần nhập giá trị vào bảng thì mình sử dụng hàm check có giá trị đó chưa, nếu chưa thì mình sẽ tăng value của giá trị đó lên.Sau đó thì insert nó vào set để tránh trường hợp là bị lặp(có 3 dòng mà giá trị đó lặp 2 lần trên dòng 1 và 1 lần ở dòng 3, ví thế nên phải insert vào set và tạo set mới mỗi lần xong vòng lặp 2).

Sau đó thì sử dụng bool để check.Nếu mà value của nó bằng n thì bool là true rồi cout.còn ko thì cout NOT FOUND.

```
#include<bits/stdc++.h>

using namespace std;   

int main(){
    int n; cin >>n;
    map<int,int> mp;
    for(int i=0; i<n; i++){
        set<int> check;//được làm mới cho mỗi dòng
        for(int j=0; j<n; j++){
            int x; cin >> x;
            if(check.count(x) == 0){
                mp[x]++;
                check.insert(x);// tránh lặp
            }
        }
    }
    bool ok = false;//chưa tìm thấy
    for(auto it : mp){
        if(it.second == n){
            ok = true; // đã tìm thấy
            cout << it.first << " ";
        }
    }
    if(ok = false){
        cout << "NOT FOUND" << endl;
    }

}
```

