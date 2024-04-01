![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/3547653a-f248-4d3b-b04f-22589cc757c2)

Bài này cũng dễ, chạy for lồng nhau.Các viền thì mình in `*`, thì chỉ cần cho điều kiện là `i == n || i == 1 || j == 1 || j == N` là xong. Còn dòng chẵn lẽ là điều kiện có chia hết cho 2 là xong.

```cpp
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (i == 1 || i == N || j == 1 || j == N) {
                cout << "*";
            } else {
                if (i % 2 == 0) {
                    cout << "~";
                } else {
                    cout << "#";
                }
            }
        }
        cout << endl;
    }

    return 0;
}
```
