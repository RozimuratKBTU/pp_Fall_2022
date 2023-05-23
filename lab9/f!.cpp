#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    stack <char> st;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            st.push(s[i]);
        } else {
            if (st.empty()){
                cout << "NO";
                return 0;
            }
            st.pop();
        }
    }
    if(st.empty()){
        cout << "YES";
    } else {
        cout << "NO";
    }
}