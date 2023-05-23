#include <bits/stdc++.h>
using namespace std;

void sum(int n){
    int summ = 0;
    while (n > 0){
        summ += n % 10;
        n /= 10;
    }        
    cout <<summ;                      
}

int main(){
    int n;
    cin >> n;
    sum(n);                        
}