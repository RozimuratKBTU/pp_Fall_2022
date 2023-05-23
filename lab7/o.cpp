#include <bits/stdc++.h>

using namespace std;

char getSim(int S){
    if(S >= 10) return S-10 +'A';
    return S + '0';
}
//            tree : 1 --> 33 --> 1000
void getRec(int n, int k){      
    if(n == 0) return;        
    getRec(n/k, k);       
    cout << getSim(n%k);
}

void solve(){
    int n, k;
    cin >> n >> k;
    getRec(n, k);
}

int main (){
    solve();
}