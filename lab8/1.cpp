#include <bits/stdc++.h>
using namespace std;

int main(){
    
    vector <int> v;

    int n,x;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);     // push_back - дегенимиз берилген векторга мани х ке тен болатын обьект кос дегенди билдиреди
    }
    for(int i = 0; i < n; ++i){
        cout << v[i]<<" ";
    }

    return 0;
}