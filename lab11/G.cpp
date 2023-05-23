#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <string, int > m;
    map <string , int> mp;
    for(int i = 0; i< n; ++i){
        string s;
        int x;
        cin >> s >> x;
        if(m[s] != x){
            m[s] = x;
            mp[s]++;
        }
    }
    map <string , int> :: iterator it;
    for(it = mp.begin(); it != mp.end(); ++it){
        if(it->second >= 3) {
            cout << (*it).first << " "<< "+1" << endl;
        }
        else {
            cout << it->first << " " << "NO BONUS" << endl;
        }
    }
}