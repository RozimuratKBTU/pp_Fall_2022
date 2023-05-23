#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    char x;
    int n, cnt =0;
    cin >> s >>x >> n;
    for(int i = 0; i < s.size();i++){
        if(s[i] == x){
            cnt++;
        }
    }
    if(cnt == n){
        cout << "YES";
    }else {
        cout << "NO";
    }
}