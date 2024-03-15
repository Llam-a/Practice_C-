Một số được coi là số tăng nếu các chữ số của nó tăng dần từ trái qua phải. Bạn hãy liệt kê những số tăng dần trong đoạn từ a tới b. Ví dụ số 12789 là số tăng dần. Gợi ý : So sánh các cặp số đứng cạnh nhau, 9 - 8, 8 - 7, 7 - 2, 2 - 1. Nếu trong quá trình so sánh thấy số đứng sau >= số đứng trước thì return false luôn. Lưu ý để vòng while(n >= 10) để khi n tới số 1 thì nó sẽ dừng.

```cpp
bool so_tang(int n){
    //code here
}

int main(){
    int a, b; cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(so_tang(i)){
            cout << i << " ";
        }
    }
    return 0;
}
```
Mình giải quyết bài này theo hướng là

Ví dụ ta có số n=1234.

+ Bắt đầu là vòng lặp while(n>=10), mình chia `%` n cho 10 để được số 4 rồi lưu vào biến digit1.Sau đó mình chia nguyên `/` n cho 10, để n còn lại là 123, rồi tiếp tục chia dư `%` để lấy số 3 r lưu vào biến digit2.
  
+ Theo đó mình lập điều kiện if(). Nếu digit1 <= digit2 sẽ return là false luôn.

```cpp
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool so_tang(int n){
    while(n>=10){
        int digit1 = n % 10;
        n /=10;
        int digit2 = n % 10;
        if(digit1 <= digit2){
            return false;
        }
    }
    return true;
    
}

int main(){
    int a, b; cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(so_tang(i)){
            cout << i << " ";
        }
    }
    return 0;
}
```
