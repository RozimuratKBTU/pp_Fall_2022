#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int mx = INT_MIN;
    for (int i = 1; i <= n; i++){
        int x;
        cin >> x;
        if (mx < x){
            mx = x;
        }
    }
    cout << mx ;

}

/*int main(){
    int n;
    cin >> n;
    int mx = INT_MIN;
    int i = 0;
    while( i < n){
        int x;
        cin >> x;
        if( x > mx){
            mx = x;
        }
        i++;
    }
    cout << mx;
}*/