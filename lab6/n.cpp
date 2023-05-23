#include <bits/stdc++.h>
using namespace std;

void transpose(int n, int m){
    int a[n][m];
    for(int i =0; i < n; i++){
        for(int j = 0; j< m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i <m; i++){
        for(int j = 0; j < n; j++){
            cout << a[j][i]<< " ";
        }
        cout << endl;
    }
}
int main(){
    int n, m;
    cin >> n >> m;
    transpose(n,m);
}