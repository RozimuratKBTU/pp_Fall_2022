#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 0;
    while (pow(2,i) <= n){
        cout << pow(2,i) << " ";
        i++;
    }
}