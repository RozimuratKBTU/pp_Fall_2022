#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main(){
    string s;
    cin >> s;
    vector <char> v;
    vector <char> res;
    for(int i = 0; i< s.size(); ++i){
        v.push_back(s[i]);
    }
    sort(v.begin(),  v.end());
    for(int i = 0; i<v.size(); ++i){
        if(v[i] != v[i+1]) res.push_back(v[i]);
        else i++;
    }
    if(res.size() > 1) cout << "JOJO";
    else cout << "ZA WARUDO TOKI WO TOMARE";

    
}