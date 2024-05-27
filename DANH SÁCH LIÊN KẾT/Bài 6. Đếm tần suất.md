![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/52a625c9-be7f-4d9b-9cab-750e69bcda18)

![image](https://github.com/Llam-a/Practice_Cpp/assets/115911041/fa562702-902c-4658-a029-f4e3b74fcd81)

```cpp
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Node
{
    string data;
    int tansuat;
    Node *next;
    Node(string x, int s)
    {
        data = x;
        tansuat = s;
        next = NULL;
    }
};
typedef Node* node;

void them(node &a, string x)
{
    if(a == NULL)
    {
        node tmp = new Node(x, 1);
        a = tmp;
    }
    else
    {
        node p = a;
        while(p->next != NULL)
        {
            if(p->data == x)
            {
                p->tansuat += 1;
                return;
            }
            p = p->next;
        }
        if(p->data == x) p->tansuat += 1;
        else
        {
            node tmp = new Node(x, 1);
            p->next = tmp;
        }
    }
}
void duyet(node a)
{
    while(a != NULL)
    {
        cout << a->data << " " << a->tansuat << endl;
        a = a->next;
    }
}
int main()
{
    node head = NULL;
    string s; 
    while(cin >> s){
        them(head, s);
    }
    duyet(head);
}
```
