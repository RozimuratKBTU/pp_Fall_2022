#include <iostream>
#include <stack>
using namespace std;

int main(){
    string s;
    cin >> s;
    stack<int>st;
    
    bool result = true;
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '{' or s[i] == '[' or s[i] == '('){
            st.push(s[i]);
        }
        else{
            if(st.empty()){
                result = false;
                break;
            }
            else{
                if(s[i] == ')' and st.top() != '('){
                    result = false;
                    break;
                }
                else if(s[i] == ']' and st.top() != '['){
                    result = false;
                    break;
                }
                else if(s[i] == '}' and st.top() != '{'){
                    result = false;
                    break;
                }
                st.pop();
            }
        }
    }
    if(result == false or !st.empty()){
        cout << "NO";
    }
    else{
        cout << "YES";
    }
}
