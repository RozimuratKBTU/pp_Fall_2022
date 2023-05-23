#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    //s[i] -= 26 --> s[i] = s[i] - 26;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
       if(s[i] == 'z'){
          s[i] ='a';
        }else{
        s[i] = s[i] + 1;
        }
    }
    cout << s;
}