#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <string> v;
    vector <int> vv;
    for(int i = 0; i< n; ++i){
        string s;
        int d;
        cin >> s >> d;
        v.push_back(s);
        vv.push_back(d);
    }
    sort(v.begin(), v.end());
    sort(vv.begin(), vv.end());
    for(int i = 0;i< n; ++i){
        cout << v[i] << " " << vv[i] << endl;
    }
}