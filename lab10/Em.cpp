#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <char, int> m;
    set <char> d;
    set <char> :: iterator it;
    for(int i = 0; i< n; ++i){
        string s;
        cin >> s;
        for(int j = 0; j< s.size(); ++j){
            d.insert(s[j]);
        }
        for(it = d.begin(); it != d.end(); ++it){
            m[*it]++;
        }
        d.clear();
    }
    vector <char> v;
    map <char, int> :: iterator itr = m.begin();
    for(itr; itr!= m.end(); ++itr){
        if(itr->second == n) v.push_back(itr->first);
    }
    if(v.empty()) cout << "NO COMMON CHARACTERS";
    else{
        for(int i = 0; i< v.size(); ++i){
        cout << v[i] << " ";
    }
    }
}