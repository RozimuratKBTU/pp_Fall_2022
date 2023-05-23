#include <bits/stdc++.h>
using namespace std;
int t = -1;
long long int opp(){
    t++;
    long long int res= 1;
    for(int i = 0; i<t; ++i){
        res *= t;
    }
    return res;

}
int main(){
    int n;
    cin >> n;
    vector <long long int> v(n+1);
    
    generate(v.begin(), v.end(), opp);
    
    for(int i = 0; i<=n;++i){
        cout << v[i] << " ";
    }


}