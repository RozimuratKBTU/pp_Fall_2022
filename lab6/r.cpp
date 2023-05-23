#include <bits/stdc++.h>
using namespace std;

char toupper(char c){
    if(c >= 'a' and c <= 'z'){
        c = c - 32;
    }
    return c;
}

int main(){
    char c;
    cin >> c;
    cout << toupper(c);
    return 0;
}