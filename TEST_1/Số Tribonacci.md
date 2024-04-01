![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/5e3d51d5-5f47-4c0c-82cc-ec57098cb108)

Bài này giải quyết nhanh thôi.Đã có công thức, và dãy số đầu tiên. Áp dụng mảng r làm là được.

```cpp
#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	long long t[n];
	t[0] = 0;
	t[1] = 0;
	t[2] = 1;
	
	for(int i = 3; i < n; i++){
		t[i] = t[n -1] + t[n - 2] + t[n -3];
	}
	for(int i = 0; i < n; i++){
		cout << t[i] << " ";
	}
	return 0;
}
```
