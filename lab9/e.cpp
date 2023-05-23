#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
    cin>>n;
    string s;
    map <string, int> mp;
    for(int i=0;i<n;i++) {
        cin>>s;
        mp[s] += 1;
    }

    int cnt = 0;
    for(pair <string, int> element: mp) {
        if (element.second == 3) {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}

// #include <iostream>
// #include <map>

// using namespace std;

// int main(){
//     map<string,int> m;
//     int n;
//     cin>>n;
//     string nomer;
//     for(int i=0;i<n;i++){
//         cin>>nomer;
//         m[nomer]++;
//     }
//     int cnt=0;
//     map<string,int> :: iterator it;
//     for(it=m.begin();it!=m.end();it++){
//         if(it->second==3) cnt++;
//     }
//     cout<<cnt;
//     return 0;
// }