![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/0101b960-8119-4d5d-82de-d70e35afa0ef)

Challenge này kết hợp giữa lật ngược mảng và liệt kê các giá trị khác nhau

```cpp
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i]; 
    }

  
    for (int i = n - 1; i >= 0; --i) {
        bool check = true;
        for (int j = i + 1; j < n; ++j) {
            if (a[i] == a[j]) {
                check = false;
                break;
            }
        }
      
        if (check) {
            cout << a[i] << " ";
        }
    }

    return 0;
}
```
