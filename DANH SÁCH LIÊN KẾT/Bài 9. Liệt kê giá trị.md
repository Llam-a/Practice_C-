![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/0e2d3677-25d2-4d48-ac62-36671d53efca)


```cpp
#include<bits/stdc++.h>

using namespace std;
struct node{
    int data;
    node *next;
    node *prev;
};
node* makenode(int x){
    node *tmp = new node();
    tmp->data = x;
    tmp->next = NULL;
    tmp->prev = NULL;
    return tmp;
}
void last(node*& head, int x){
    node *newnode = makenode(x);
    if(head == NULL){
        head = newnode;
        return;
    }
    node* tmp = head;
    while(tmp->next != NULL){
        if(tmp->data == x) return;
        tmp = tmp->next;
    }
    if(tmp->data == x) return;
    newnode->prev = tmp;
    tmp->next = newnode;
}
void in(node* a){
    while(a != NULL){
        cout << a->data << " ";
        a = a->next;
    }
}
int main(){
    node* head = NULL;
    int n; cin >> n;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        last(head,x);
    }
    in(head);
}
```
