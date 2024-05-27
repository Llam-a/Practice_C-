![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/c288b307-f03a-423f-b23e-ad543b1a119b)

```
Sample Input 0

11
pop
show
pop
show
show
show
show
pop
push 119
push 433
pop
Sample Output 0

EMPTY

EMPTY

EMPTY

EMPTY

EMPTY
Sample Input 1

9
pop
push 928
push 619
show
show
pop
pop
show
push 761
Sample Output 1

619 928 
619 928 
EMPTY
```

Bài này làm theo kiểu LIFO - Last In First Out, push thì sẽ thêm đầu.
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
        tmp->next = a;
        a = tmp;
    }
}
void pop(node* &a){
    if(a == NULL){
        return;
    }else{
        a = a->next;
    }
}
void show(node* a){
    if(a == NULL) cout << "EMPTY" << endl << endl;
    else{
        while(a!=NULL){
            cout << a->data << " ";
            a = a->next;
        }
        cout << endl;
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
            show(a);
        }
    }
}
```
