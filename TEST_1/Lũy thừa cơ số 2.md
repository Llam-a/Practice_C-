![Screenshot 2024-04-01 085036](https://github.com/Llam-a/Practice_Cpp/assets/115911041/79d466ac-3177-4af7-b426-d618632e5cd6)


Challenge đầu tiên khá dễ, với lại cũng đã có hint nên mình ko giải thích gì nhiều.Ban đầu mình có làm nhưng khai báo kiểu biến lại không phải long long, nên sumbit bài này khá muộn do hoảng. :(((

```cpp
#include <iostream>

using namespace std;

bool check(long long n){
	while(n % 2 == 0){
		n /=2;
		}
		if(n ==1) return true;
		else return false;
	}


int main(){
	long long n;cin >> n;
	if(check(n)){
		cout << "YES";
	}else{
		cout << "NO";
	}
	return 0;
}
```
