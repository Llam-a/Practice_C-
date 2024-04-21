![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/3eee226f-19b7-4766-834e-799a3ab2d3ee)

Ở bài này thì nó kêu là in ra các số lớn hơn các phần tử đứng trước nó. Thì thường là mình cho một phần tử là max, r so sánh max đó với các phần tử, phần tử nào lớn thì cout ra thôi.Sau đó thì cập nhật max là phần tử vừa in ra.Thêm nữa là, bài này coi phần tử đầu a[0] cũng thỏa mãn.

```cpp
#include<bits/stdc++.h>

using namespace std;

void find(int a[],int n){
    int max = a[0];// cho 1 phần tử là max, để so sánh các phần tử trong mảng
    cout << max << " ";
    for(int i = 1; i < n; i++){
        if(a[i] > max){
            cout << a[i] << " ";
            max = a[i];
        }
    }
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    find(a,n);
}
```
