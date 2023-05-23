#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t ="";
    cin >>s;
    for(int i = s.size() - 1; i >= 0; i--){
        t += s[i];
    }
    if( s == t){
        cout << "YES";
    }else {
        cout << "NO";
    }
}

/*
#include <iostream>
#include <string>
using namespace std;

int main (){
    string s;
    cin >> s;
    int t = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == s[s.size()-1-i]){
            t++;
        }
    }
    if(s == s.size(){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}
*/