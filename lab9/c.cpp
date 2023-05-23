#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map <int,int> mp;
    for(int i = 0; i < n; i++){
        int m;
        cin >> m;
        if(mp[m] == 0) mp[m] = 1;
        else mp[m]++;
    }
    int cnt = 0;
    map <int,int> ::iterator it;
    for(it = mp.begin(); it != mp.end(); it++){
        if(it -> second > 1)cnt++;
    }
    cout << cnt;
}

// #include <iostream>
// #include <map>

// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     map<int,int> m;
//     int x;
//     for(int i=0;i<n;i++){
//         cin>>x;
//         m[x]++;
//     }
//     int cnt=0;
//     map<int,int> :: iterator it;
//     for(it=m.begin();it!=m.end();it++){
//         if(it->second>=2) cnt++;
//     }
//     cout<<cnt;
//     return 0;
// }