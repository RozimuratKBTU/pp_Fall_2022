#include <bits/stdc++.h>
using namespace std;

int main(){
    string t;
    cin >> t;

    set <char> s;
    for(int i = 0; i < t.size(); i++){
        if(t[i] >= 'A' and t[i] <= 'Z'){
            s.insert(char(t[i] +32));
        }else {
            s.insert(t[i]);
        }
    }
    cout << s.size() << endl;
    set <char> :: iterator it;
    for (it =s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
}