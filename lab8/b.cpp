#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
       cin >> v[i];
    }
    for(int i = n - 1; i <= 0; i--){
        cout << v[i] << " ";
    }
}


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int x;
//     vector <int> v;
//     for(int i=0;i<n;i++){
//         cin>>x;
//         v.push_back(x);
//     }
//     //sort(v.rbegin(), v.rend());
//     for(int i=n-1;i!=-1;i--){
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }