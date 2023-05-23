#include <bits/stdc++.h>
using namespace std;

void capital(string s){
    for(int i = 0; i < s.length();i++){
        if(i % 2 == 0){
                s[i]= s[i]-32;
            }
             cout << s[i];
        }
    }
int main(){
    string s;
    cin>> s;
    capital(s);
}