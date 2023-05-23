#include<iostream>
using namespace std;

int maxi(string s, int i, int mx){
    if(i == s.size()) return mx;
    mx = max(mx, s[i] - '0');
    return maxi(s, ++i, mx);
}

int main(){
    string s; cin >> s;
    cout << maxi(s, 0, s[0] - '0');
}