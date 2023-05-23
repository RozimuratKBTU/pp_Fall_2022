#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    if ( a == b){
        cout << 0;
    }
    else { 
        if (a>b){
        cout << 1;
        }
        else{
            cout << 2;
        }
    }    
}