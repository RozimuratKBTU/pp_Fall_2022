#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j =0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    int mx1 = 0, mx2 = 0;
    for(int i = 0; i < n; i++){
        for(int j =0; j < n; j++){
            if(arr[i][j] > mx1){
                mx1 = arr[i][j];
            }
        }
        for(int i = 0; i < n; i++){
            for(int j =0; j < n; j++){
                if(arr[i][j] > mx2 and arr[i][j] < mx1){
                   mx2 = arr[i][j];
                }
            }
        }
    }
    if(mx1 == mx2){
        cout << 0;
    }else{
        cout << mx2;
    }
}