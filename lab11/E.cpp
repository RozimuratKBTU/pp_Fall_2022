#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;
int main(){
    int n;
    cin >> n;
    set <char> s;
    map <char, int> m;
    set <char> :: iterator it;
    for(int i = 0; i< n;++i){
        string d;
        cin >> d;
        for(int j = 0; j< d.size(); ++j){
            s.insert(d[j]);
        }
        for(it = s.begin(); it != s.end(); ++it){
            m[*it]++;
        }
        s.clear();
    }
    vector <char> c;
    map <char , int> :: iterator itr = m.begin();
    for(itr; itr != m.end(); ++itr){
        if(itr->second == n) c.push_back(itr ->first);
    }
    if(c.empty()) cout << "NO COMMON CHARACTERS";
    else{
        for(int i = 0; i< c.size(); ++i){
            cout << c[i] << " ";
        }
    }
}