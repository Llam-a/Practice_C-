![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/29c89184-2667-4f45-9d36-f391a3402988)

Đề yêu cầu ta xóa hết giá trị x trong dslk.Idea bài mày là mình sẽ chia 2 trường hợp

1. Xóa các node có giá trị x từ đầu danh sách:

```cpp
while(a != NULL && a->data == x){// kiểm tra danh sách có trống không và giá trị của node đầu tiên = x
        node *tmp = a;// lưu trữ con trỏ đến node hiện tại có giá trị = x
        a = a->next;// di chuyển con trỏ a sang node tiếp theo
        delete tmp;// xóa node
    }
```

2.Xóa các node có giá trị x không phải đầu danh sách:

```cpp
node* current = a;// đầu danh sách
    while(current != NULL && current->next != NULL){// ktra ds có rổng ko và node tt có tồn tại ko
        if(current->next->data == x){// nếu giá trị của node tiếp theo = x
            node *tmp = current->next;// lưu trữ con trỏ cần xóa
            current->next = current->next->next;// di chuyển con trỏ đến node tiếp theo để bỏ qua con trỏ cần xóa
            delete tmp;// xóa node
        }else{
            current = current->next;// nếu giá trị của con trỏ ko phải là x thì sang node tiếp theo
        }
    }
```
```cpp
#include<bits/stdc++.h>

using namespace std;
struct node{
    int data;
    node *next;// con tro kieu node ten next tro vao node tiep tiep theo
};
node* makenode(int x){
    node *a= new node();
    a->data = x;
    a->next = NULL;
    return a;

}
void insert(node* &a, int x){
    node *tmp = makenode(x);
    if(a == NULL){
        a = tmp;
    }else{
        node* t = a;
        while(t -> next != NULL){
            t = t -> next;
        }
        t->next = tmp;
    }
}
void xoa(node* &a, int x){
    while(a != NULL && a->data == x){
        node *tmp = a;
        a = a->next;
        delete tmp;
    }
    node* current = a;
    while(current != NULL && current->next != NULL){
        if(current->next->data == x){
            node *tmp = current->next;
            current->next = current->next->next;
            delete tmp;
        }else{
            current = current->next;
        }
    }
}
void in(node* a){
    if(a == NULL){
        cout << "EMPTY";
        return;
    }
    while(a!= NULL){
        cout << a->data << " ";
        a = a->next;
    }
}
int main(){
    int n; cin >> n;
    int x;cin >> x;
    node *a = NULL;
    for(int i = 1; i <= n; i++){
        int t;cin >> t;
        insert(a,t);
        
    }
    xoa(a, x);  
    in(a);
}
```
