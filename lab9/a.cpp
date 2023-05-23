#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <pair<int, int>> v;
    for(int i = 0; i < n; i++){
        int x,y;
        cin >>x >> y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(), v.end());
    for(auto i: v){
        cout << i.first << " "<< i.second << endl;
    }

    return 0;
}


// #include <bits/stdc++.h>

// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     vector <pair<int,int> > m;
//     for(int i=0;i<n;i++){
//         int x,y;
//         cin>>x>>y;
//         m.push_back(make_pair(x,y));
//     }
//     sort(m.begin(),m.end());
//     vector<pair<int, int> > :: iterator it;
//     for(it=m.begin();it!=m.end();it++){
//         cout<<(*it).first<<" " << (*it).second<<endl;
//     }
//     return 0;
// }