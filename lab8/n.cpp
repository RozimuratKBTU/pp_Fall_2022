#include <bits/stdc++.h>
using namespace std;

int main(){

    set <int> s;

    int n,x;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x;
        if(x %2 != 0){
        s.insert(x);
        }
    }
    set <int> :: iterator it;
    for(it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
}