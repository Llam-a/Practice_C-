![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/789b03bd-34d4-436f-bb23-8c511eff3be6)

Bài này yêu cầu min, max giữa n thành phố với nhau. Khoảng cách được sắp xếp tăng dần,nên đơn giản thôi.

Ví được sắp xếp tăng dần nên là min,max của a[0] sẽ lần lượt là a[0] - a[1] và a[0] - a[n-1].

Còn ở cuối `a[n-1]` thì min, max lần lượt là a[n-1] - a[0] và a[n-1] - a[n-2].

Còn các phần tử ở giữa, min sẽ là 2 phần tử kế nó. max sẽ là nó với a[0] và a[n-1]. Cái này có thể đơn giản giải thích là, bởi vì các dãy số sắp xếp tăng dần nên khoảng cách giữa hai số càng gần sẽ là min, và ngược lại xa nhau sẽ là max.

```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    long long a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << abs(a[0] - a[1]) << " " << abs(a[0] - a[n-1]) << endl;

    for(int i = 1; i < n - 1; i++){// chạy từ 1 đến n - 1 vì 2 trường hợp đó là cuối mảng và đầu mảng.
        int mini =  min(abs(a[i] - a[i - 1]), abs(a[i] - a[i + 1]));
        int maxi = max(abs(a[i] - a[0]), abs(a[i] - a[n - 1]));
        cout << mini << " " << maxi << endl;
    }

    cout << abs(a[n - 1] - a[n - 2]) << " " << abs(a[n - 1] - a[0]) << endl;
}
```
