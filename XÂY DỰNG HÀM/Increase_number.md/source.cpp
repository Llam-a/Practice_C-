#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool so_tang(int n){
    while(n>=10){
        int digit1 = n % 10;
        n /=10;
        int digit2 = n % 10;
        if(digit1 <= digit2){
            return false;
        }
    }
    return true;
    
}

int main(){
    int a, b; cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(so_tang(i)){
            cout << i << " ";
        }
    }
    return 0;
}

