#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
bool comp(vector <int> v1, vector <int> v2){
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i< v1.size(); ++i){
        sum1 += v1[i];
    }
    for(int i = 0; i<v2.size(); ++i){
        sum2 += v2[i];
    }
    return sum1 < sum2;
}
int main(){
    int n;
    cin >> n;
    vector <vector <int> > v;
    
    for(int i = 0; i<n; ++i){
        int m; cin >> m;
        vector <int> t;
        for(int j = 0; j< m; ++j){
            int x;
            cin >> x;
            t.push_back(x);
        }
        v.push_back(t);
    }
    // cout << endl;
    sort(v.begin(), v.end(), comp);
    for(int i = 0; i< v.size(); ++i){
        for(int j = 0; j< v[i].size(); ++j){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}