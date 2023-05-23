#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,l,r;
    cin>> n>>l>>r;
    int arr[n];
    for(int i =1; i <=n; i++){
        cin >>arr[i];
    }
    for(int i =1; i < l; i++){
        cout << arr[i]<<" ";
    }
    for(int i =r; i >= l; i--){
        cout <<arr[i]<<" ";
    }
    for(int i =r+1; i<= n; i++){
        cout <<arr[i]<<" ";
    }
}
/* int n;
    cin>> n;
    int l,r, sum = 0;
    cin >> l >> r;
    l--;   осы кезде биз буларды азайтамыз
    r--;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int i = 0;
    while ( i < l){
        cout << arr[i]<< " ";
        i++;
    }
    while (r >= l){
        cout << arr[r] << " ";
        r--;
    } */