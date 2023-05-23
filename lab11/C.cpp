#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main(){
    int sum = 0;
    int n;
    cin >> n;
    map <string , float> m;
    multimap <float, string> m1;
    for(int i = 0; i< n; ++i){
        string s;
        int x;
        cin >> s >> x;
        m[s] += x;
        sum += x;
    }
    // sort(m.begin(), m.end());
    map <string, float> :: iterator it = m.begin();
    for(it; it != m.end(); ++it){
        string d = it -> first;
        float r = it ->second;
        // cout << it -> first << " " << (it -> second * 100/ sum) << "%" << endl;
        m1.insert({r, d});
    }
    multimap <float , string >  :: reverse_iterator itr;
    for(itr = m1.rbegin(); itr != m1.rend(); ++itr){
        double h = (itr->first *100 )/ sum;
        cout << itr->second << " " << h << "%" << endl;
    }
}