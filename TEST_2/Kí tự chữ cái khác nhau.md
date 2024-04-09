![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/86ae7232-2fd0-4418-b61a-15d04e79f399)

Challenge khá đơn giản. Các bạn tạo hàm bool check các chữ cái từ a -> z và A -> Z. Hoặc có thể dùng hàm isalpha() để check xem nó là chữ cái hay số.Ý tiếp theo là sắp xếp theo thứ tự tăng dần, nhưng mà không phân biệt chữ hoa hay thường. Thì mình sử dụng hàm tolower() để đổi sang thường hết.

```cpp
#include<bits/stdc++.h>

bool check(char c){
    return (c >=  'a' && c <= 'z') || (c >= 'A' && c <=)
}
int main(){
    int n; cin >> n;
    set<char> se;
    for(int i = 0; i < n; i++){
        char c; cin >> c;
        c = tolower(c);
        if(check(c)){
            se.insert(c);
        }
    }
    cout << se.size() << endl;
    for(char x : se){
        cout << c << " ";
    }
}  
```


