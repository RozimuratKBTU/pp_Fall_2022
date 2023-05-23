#include <bits/stdc++.h>

using namespace std;


bool cheater(vector<int> &v,int k,int i){
    if(i==v.size()) return false;
    if((v[i]-v[i-1])<k) return true;
    
    return cheater(v, k, i+1);
}


int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    sort(v.begin(),v.end());
    if(cheater(v,k,1)==true) cout<<"cheater";
    else cout<<"no";
    return 0;
}