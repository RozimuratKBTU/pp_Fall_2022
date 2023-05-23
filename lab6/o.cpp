#include <bits/stdc++.h>
using namespace std;

int sum(int n){
    int summ = 0;
    while (n > 0){
        summ += n % 10;
        n /= 10;
    }
    return summ;
}
int main(){
    int n;
    cin >> n;
    if(sum(n) %(n % 10) == 0){
        cout << "Yes";
    } else {
        cout << "No";
    }
}