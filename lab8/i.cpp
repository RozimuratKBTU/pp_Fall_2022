#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >> n;
    vector <int> v;
    for(int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }
    int k;
    cin >> k;
    if(find(v.begin(), v.end() , k) != v.end()){
        cout << "Yes";
    }else{
        cout << "No";
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
//     int k;
//     cin>>k;
//     // vector <int> :: iterator it;
//     // it=find(v.begin(),v.end(),k);
//     // if(it!=v.end()){
//     //     cout<<"Yes";
//     //     return 0;
//     // }
//     for(int i=0;i<v.size();i++){
//         if(v[i]==k){
//             cout<<"Yes";
//             return 0;
//         }
//     }
//     cout<<"No";
//     return 0;
// }