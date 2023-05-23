#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    long long odd = 0, even = 0;
    for(int i =0; i < s.size(); i++){
        if( i % 2 == 0){
            even += s[i] - 48;
        }else {
            odd += s[i] - 48;
        }
    }
    if(odd == even){
        cout <<"YES";
    }else {
        cout << "NO";
    }
}