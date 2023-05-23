#include <bits/stdc++.h>
using namespace std;

int main(){
    
    vector <int> v;

    int n,x;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);     
    }

    sort(v.begin(), v.end());    //sort деген алгоритимди осу ретимен орналастырганда колданамыз
     // итератор
      //begin                //end
           /* _.--------------_-.*/
    /* reverse e            reverse b */

    for(int i = 0; i < n; ++i){
        cout << v[i]<<" ";
    }

    return 0;
}