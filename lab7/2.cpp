#include <bits/stdc++.h>
using namespace std;
// формула фибоначи - fk =f(k-1) +f(k-2)+f(k-3)...
int f(int n){
    if(n == 1) return 1;
    if(n == 2) return 1;
    return f(n -1)+ f(n-2);
}
int main(){
    int x;
    cin >> x;
    cout << f(x)<< endl;

    return 0;
}