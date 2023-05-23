#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin >> n;
    string z = "";
    multimap <string , int> m;
    for(int i = 0; i< n; ++i){
        string q, w;
        int a, s;
        cin >> q >> a >> w >> s ;
        z = q + " and " + w;
        m.insert(make_pair(z, a+s));
    }
    multimap <string , int> :: iterator it;
    pair <string , int> p;
    for(it = m.begin(); it != m.end(); ++it){
        // p =*it;
        if((*it).first != p.first || (*it).second != p.second){
         cout << (*it).first << " " << (*it).second << endl;
        }
        p = *it;
    }
}