#include <bits/stdc++.h>

using namespace std;
int positive(int n){
    if(n < 0) return abs(n);
    else return n;
}
int main (){
    int n;
    cin >> n;
    cout << positive(n);
}

