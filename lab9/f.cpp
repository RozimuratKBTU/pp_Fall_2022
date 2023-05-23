#include <bits/stdc++.h>
using namespace std;

int main(){
    stack <char> st;
    bool ok = true;
    string s;
    cin >> s;
    for(int i = 0; i < s.size();i++){
        if(s[i] == '('){
            st.push(s[i]);
        }else {
            if(st.empty()){
                ok = false;
                break;
            } else {
                if(s[i] == ')' && s[i] != '('){
                    ok = false;
                    break;
                }
                st.pop();
            }
        }
    }
    if(ok = false || st.empty()){
        cout << "YES";
    } else {
        cout << "NO";
    }
}