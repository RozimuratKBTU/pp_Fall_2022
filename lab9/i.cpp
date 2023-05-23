#include <bits/stdc++.h>
using namespace std;

int main(){
    set <string> st;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(st.find(s) == st.end()){
            st.insert(s);
            cout << "new user added" << endl;
        } else {
            cout << "user already exists" << endl;
        }
    }
}