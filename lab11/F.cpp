#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int a, b , c;
    cin >> a >> b >> c;
    vector <int> v;
    for(int i = 1; i <= max(a, b); ++i){
        if(a % i == 0 && b % i == 0) v.push_back(i);
    }
    reverse(v.begin(),  v.end());
    cout << v[c-1];
}