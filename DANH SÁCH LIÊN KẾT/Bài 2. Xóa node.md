![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/29c89184-2667-4f45-9d36-f391a3402988)


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
    node* truoc = NULL;node* sau = a;
    while(sau != NULL){
        if(sau->data == x){
            if(truoc == NULL){
                a = a->next;
                sau = a;
            }else{
                truoc->next = sau->next;
                sau = truoc->next;
            }
        }else{
            truoc = sau;
            sau = sau->next;
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
