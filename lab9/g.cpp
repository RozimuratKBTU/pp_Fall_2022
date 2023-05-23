#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin>>s;
    stack<char> st;
    for(int i=0;i<s.size();i++) {
        if(s[i] == '0') {
            st.push(s[i]);
        }

        if(s[i] == '1') {
            if(st.empty()) {
                st.push(s[i]);
                continue;
            }

            if(st.top() == '1') {
                st.pop();
            } else {
                st.push(s[i]);
            }
        }
    }
    

    string reversed = "";
    while(!st.empty()) {
        reversed += st.top();
        st.pop();
    }
    reverse(reversed.begin(), reversed.end());
    cout<<reversed<<endl;
}

// #include <iostream>
// #include <stack>
// using namespace std;

// int main(){
//     string s;
//     cin>>s;
//     stack<char> st;
    
//     for(int i=0;i<s.size();i++){

//         if(s[i]=='0'){
//             st.push(s[i]);
//         }else{
//             if(!st.empty() && st.top()=='1'){
//                 st.pop();
//             }else{
//                 st.push('1');
//             }
//         }
//     }
//     string ses="";
//     while(!st.empty()){
//         ses=st.top()+ses;
//         st.pop();
//     }
//     cout<<ses;
//     return 0;
// }