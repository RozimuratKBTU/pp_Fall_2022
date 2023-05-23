#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >> n;
    vector <int> v;
    for(int i = 0; i < n; i++){
        cin>> x;
        v.push_back(x);
    }
    int k , l;
    cin >> k >>l;
    v.erase(v.begin()+k, v.begin()+l+1);
    for(int i = 0; i < v.size();i++){
        cout << v[i]<<" ";
    }
}

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main(){
//     int n,a,b;
//     cin>>n;
//     int x;
//     vector <int> v;
//     for(int i=0;i<n;i++){
//         cin>>x;
//         v.push_back(x);
//     }
    
//     cin>>a>>b;
    
//     v.erase (v.begin()+a,v.begin()+b+1);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }