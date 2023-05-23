#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t = "";
    cin >>s;
    for(int i = 1; i < s.size();i++){
        t += s[i];
    }
    reverse( s.begin(), s.end());
    cout << t << " " << s;
}