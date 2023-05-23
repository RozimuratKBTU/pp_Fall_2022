#include <bits/stdc++.h>
using namespace std;
int main(){
    multimap <double , vector <int>> m;
    vector <int> v;
    int x1 , y1;
    cin >> x1 >> y1;
    int n;
    cin >> n;   
    for(int i = 0; i< n; ++i){
        v.clear();
        int x2 , y2;
        cin >> x2 >> y2;
        v.push_back(x2);
        v.push_back(y2);
        m.insert({sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)), v});
    }
    // sort(v.begin(), v.end());
    multimap <double, vector <int>> :: iterator it;
    for(it = m.begin(); it != m.end(); ++it){
        cout << it->second[0] << " " << it->second[1] << endl;
    }
}