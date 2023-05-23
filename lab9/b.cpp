#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> e;
    vector <int> o;
    for(int i = 0; i <n;i++){
        int m;
        cin >> m;
        if( m % 2 == 0) e.push_back(m);
        else o.push_back(m);
    }
    sort(e.rbegin(), e.rend());
    sort(o.begin(), o.end());
    for(int i = 0; i < e.size(); i++){
        cout << e[i] << ' ';
    }
    for(int i = 0; i < o.size(); i++){
        cout << o[i]<<' ';
    }
}

// #include <iostream>
// #include <vector>
// #include <set>

// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int x;
//     multiset<int> v1;
//     multiset<int> v2;
//     for(int i=0;i<n;i++){
//         cin>>x;
//         if(x%2==1) v1.insert(x);
//         else v2.insert(x);
//     }
//     multiset<int> :: reverse_iterator it;
//     for(it=v2.rbegin();it!=v2.rend();it++){
//         cout<<*it<<" ";
//     }
//     multiset<int> :: iterator it1;
//     for(it1=v1.begin();it1!=v1.end();it1++){
//         cout<<*it1<<" ";
//     }
    
    
// }