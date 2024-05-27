![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/2c98a10b-f476-41d5-9cfb-f89bfcacd459)

![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/697b92b4-9186-49e9-99dd-64845f487e03)

Bài này thì ngược lại bài 3, nó theo hướng First In Last Out.Push thì sẽ thêm ở cuối, pop thì xóa đầu, còn front thì in ra ở hàng đầu

```cpp
#include<bits/stdc++.h>

using namespace std;
struct node{
    int data;
    node *next;
};
node *makenode(int x){
    node *tmp = new node;
    tmp->data = x;
    tmp->next = NULL;
    return tmp;
}
void push(node* &a, int x){
    node *tmp = makenode(x);
    if(a == NULL){
        a = tmp;
    }else{
        node *p = a;
        while(p->next != NULL){
            p = p->next;
        }
        p->next = tmp;
    }
}
void pop(node* &a){
    if(a == NULL){
        return;
    }else{
        a = a->next;
    }
}
string front(node *a){
    if(a == NULL){
        return "EMPTY";
    }else{
        return to_string(a->data);
    }
}
int main(){
    int t; cin >> t;
    node *a = NULL;
    while(t--){
        string tt; cin >> tt;
        if(tt == "push"){
            int x; cin >> x;
            push(a,x);
        }else if(tt == "pop"){
            pop(a);
        }else{
            cout << front(a) << endl;
        }
    }
}
```
