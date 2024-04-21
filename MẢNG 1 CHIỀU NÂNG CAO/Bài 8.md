![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/05c933f0-af5d-4f38-98a9-29ae5afdb0a4)


Bài này mình sẽ so sánh từng phần tử của cả hai mảng với nhau, phần tử nào nhỏ sẽ cho vào, rồi phần tử tiếp theo sẽ so sánh với phần tử chưa được cho vào.Cứ thế luân phiên nhau.Cho tới 1 trong 2 hết phần tử, thì ta sẽ chia tiếp tục làm mảng chưa hết phần tử.


```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m;cin >> n >> m;
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<m;i++){
        cin >> b[i];
    }

    vector<int> res;
    int i = 0, j = 0;
    while(i < n && j < m){
        if(a[i] < b[j]){
            res.push_back(a[i++]);//a[i++]: thêm a[i] vào và đồng thời tăng chỉ số của a[i] để xét tiếp.
        }else{
            res.push_back(b[i++]);
        }
    }
    while(i < n){//nếu a còn
        res.push_back(a[i++]);
    }
    while(i < m){//nếu b còn
        res.push_back(b[i++]);
    }
    for(int x : res){
        cout << x << " ";
    }
    cout << endl;
}
```
