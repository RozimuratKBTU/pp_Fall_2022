#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <string, float> m;
    multimap <float, string> res;
    int sum = 0;
    for(int i = 0; i< n; ++i){
        string x; int y;
        cin >> x >> y;
        sum+=y;
        m[x] += y;
    }
    map <string, float> :: iterator it = m.begin();
    for(it; it!= m.end(); ++it){
        float r = it->second;
        string d = it->first;
        res.insert({r, d});
    }
    multimap <float, string> :: reverse_iterator itr = res.rbegin();
    for(itr; itr != res.rend(); ++itr){
        float b = (itr->first*100)/sum;
        // string g = itr->second;
        cout << itr->second << " " << b << "%" << endl; 
    }



}