#include <bits/stdc++.h>
using namespace std;

int main(){
    int cnt = 0;
    string s;
    cin >> s;
    for(int i = 0; i < s.size();i++){
        if(s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u'){
            cnt++;
        }
    }
    cout << cnt;
}