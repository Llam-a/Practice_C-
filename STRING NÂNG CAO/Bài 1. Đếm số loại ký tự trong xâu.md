![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/41da4821-8335-4326-9e4e-56eb83efa627)

```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s; 
    getline(cin, s);
    int alpha = 0; int digit = 0; int res = 0;
   for(char c : s){
        if(isdigit(c)){
            digit++;
        }else if(isalpha(c)){
            ++alpha;
        }else{
            ++res;
        }
   }
   cout << alpha << " " << digit << " " << res << endl;
}
```
