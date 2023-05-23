#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n][n];
    int pos_row = 1, pos_col = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> arr[i][j];
        }
    }
    int mx = arr[1][1];;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(arr[i][j] > mx){
                mx = arr[i][j];
                pos_row = i;
                pos_col  = j;
            }
        }
    }
    cout << pos_row << " " << pos_col;
}