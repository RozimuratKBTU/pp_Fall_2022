#include <bits/stdc++.h>
using namespace std;

int fibon(int n){
    if(n == 1) return 0;
    if(n == 2) return 1;
    return fibon(n-1)+ fibon( n-2);
}
int main(){
    int n;
    cin >> n;
    cout << fibon(n)<< endl;

    return 0;
}