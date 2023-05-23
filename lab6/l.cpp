#include <bits/stdc++.h>
using namespace std;

bool isVlid(string s, int n){
    int cnt = 0;
    bool ok = false;
    for(int i = 0; i < s.size(); i++){
        if(a[i] >= '0' and s[i] <= '9'){
            cnt++;
        }
        else{
            cnt = 0;
        }
        if(cnt >= n){
           return true;
        }
        return false;
    }
}
int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    if(isValid(s, n)){
        cout << "Valid";
    }
    else {
        cout << "Not valid";
    }
}