#include <bits/stdc++.h>
using namespace std;

int main(){

    set <int> v;
    int n, x;
    cin >> n;

    for(int i = 0; i < n; i ++){
        cin >> x;
        v.push_back(x);
    }
    cout << &v << endl;
    ptint (v);

    cout << v.size() << endl;

    return 0;
}