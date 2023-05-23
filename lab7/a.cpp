#include <bits/stdc++.h>

using namespace std;
int degree(int a, int n){
    a = 2;
    if(n == 0) return 1;
    return a * degree(a, n - 1);
}
int main (){
    int a = 2;
    int n;
    cin >> n;
    cout << degree(2, n);
    }