#include <bits/stdc++.h>
using namespace std;

long long calcSum(){
    long long n;
    cin >> n;
    if(n == 0) return 0;
    return n + calcSum();
}
int main(){
    cout << calcSum();
}