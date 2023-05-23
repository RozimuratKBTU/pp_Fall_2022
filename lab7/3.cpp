#include <bits/stdc++.h>
using namespace std;

int memo[50];

int f(int n){
    if(n >= 50) return -1;
    if(memo[n] == -1){
        memo[n] = f(n-1) + f(n -2);
    }
    return memo[n];
}
int main(){
    int x;
    cin >> x;
    for(int i = 0; i < 50; i++){
        memo[i]= -1;
    }
    memo[1] = memo[2]= 1;
    cout << f(x)<< endl;

    return 0;
}