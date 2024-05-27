![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/16a4b4cb-9a7c-4173-93e1-7f80ba5e2643)

![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/1acb7943-e311-4bd1-9ab2-ab914f6e6e35)


```cpp
#include<bits/stdc++.h>

using namespace std;
struct sinhvien{
    string msv,ten;
    double gpa;
    friend istream& operator >> (istream &in, sinhvien &x){
        in >> x.msv;
        cin.ignore();
        getline(in, x.ten);
        in >> x.gpa;
        return in;
    }
    friend ostream& operator << (ostream &out, sinhvien x){
        out << x.msv << " " << x.ten << " " << fixed << setprecision(2) << x.gpa;
        return out;
    }
};
struct node{
    sinhvien data;
    node *next;// con tro kieu node ten next tro vao node tiep tiep theo
};
node *makenode(sinhvien x){
    node *a = new node();
    a->data = x;
    a->next = NULL;
    return a;
}
void in(node* a){
    while(a != NULL){
        cout << a->data << endl;
        a = a->next;
    }
}
void themdau(node* &a, sinhvien x){
     node *tmp = makenode(x);
     if(a == NULL){
        a = tmp;
     }else{
        tmp->next = a;
        a = tmp;
     }
}
void themcuoi(node* &a, sinhvien x){
    node *tmp = makenode(x);
    if(a == NULL){
        a = tmp;
        return;
    }
    node *t = a;
    while(t->next != NULL){
        t = t->next;
    }
    t->next = tmp;
}
void themgiua(node* &a, sinhvien x, int k){
    node *tmp = makenode(x);
    if(k == 1){
        themdau(a, x); return;
    }
    node *t = a;
    for(int i = 1; i <= k - 2; i++){
        t = t->next;// t = k - 1
    }
    tmp->next = t->next;// t = k
    t->next = tmp;
}
int main(){
    int n; cin >> n;
    sinhvien x;
    node* a = NULL;
    for(int i = 1; i <= n; i++){
        int tt; cin >> tt;
        if(tt == 1){
            cin >> x;themdau(a, x);
        }else if(tt == 2){
            cin >> x;themcuoi(a, x);
        }else if(tt == 3){
            int k;cin >> k;
            cin >> x;themgiua(a,x,k);
        }
    }
    in(a);
}
```
