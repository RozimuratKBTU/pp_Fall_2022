#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int arr[n];
    for(int i = 0; i< n; ++i){
        cin >> arr[i];
    }
    rotate(arr, arr+m, arr+n);
    reverse(arr, arr+n);
    for(int i = 0; i< n; ++i){
        cout << arr[i] << " ";
    }


}