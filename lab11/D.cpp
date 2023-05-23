#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, m;
    cin >> n >>  m;
    int arr[n][m];
    for(int i = 0; i< n; ++i){
        for(int j = 0; j< m;++j){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i<n; ++i){
        for(int j = 0; j< m; ++j){
            if(arr[i][j] == arr[i][j+1] && arr[i][j] == arr[i+1][j] && arr[i+1][j] == arr[i+1][j+1]){
                cout << "NO"; return 0;
            }
        }
    }
    cout << "YES";
}