#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n>>m;
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j =0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    int summ[n];
    for(int i =0 ; i < n; i++){
        long long sum =0;
        for(int j = 0; j < m; j++){
            sum += arr[i][j];
        }
        summ[i]= sum;
    }
}