#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    bool flag = false;
    for(int i = 1; i < n; i++){
        if(n == i*i){
            cout << "Yes";
            flag = true;
            break;
        }
    }
    if(flag == false){
        cout << "No";
    }
}