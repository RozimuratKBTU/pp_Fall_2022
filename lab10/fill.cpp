#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> v(n);
    fill(v.begin(), v.end(), 99);
    for(int i = 0; i< v.size(); ++i){
        cout << v[i] << " ";
    }
}