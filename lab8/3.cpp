#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n,x;
    cin>>n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    v.push_back(100);
    v.push_back(101);
    v.push_back(102); // болса сонында осылар турады
    for(int i = 0; i < n; ++i){
        cout << v[i]<<" ";
    }

    return 0;
}