#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int k;
    cin >> k;
    v.erase(v.begin() + k);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] <<" ";
    }
    return 0;
}


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main(){
//     int n,a;
//     cin>>n;
//     int x;
//     vector <int> v;
//     for(int i=0;i<n;i++){
//         cin>>x;
//         v.push_back(x);
//     }
//     cin>>a;
//     v.erase (v.begin()+a);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }