#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    bool flag = false;
    if(n == 1 || n == 0){
        flag = false;
    }else{
        for(int i = 2; i < n/2; i++){
            if (n%i == 0){
                flag = false;
                break;
            }
            flag = true;
        }
    }
    if(flag) cout << "Yes";
    else cout << "No";
}