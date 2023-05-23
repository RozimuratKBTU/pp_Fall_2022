#include <bits/stdc++.h>
using namespace std;

bool isValid(int n){
    bool valid = true;
    while(n > 0){
        if(n % 10) % != 0{
            valid = false;
            break;
        }
        n /=10;
    }
    if(valid){
        return true;
    }
    return false;
}
int main(){
    int n;
    cin >> n;
    if(isValid(n)){
        cout << "Valid";
    }
    else {
         cout << "Not valid";
    }
}
   