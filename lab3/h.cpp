#include <bits/stdc++.h>
using namespace std;

int main(){
   int n,l,r, sum =0; //l -left
   cin >> n>> l >> r; //r - right
   int arr[n];
   for(int i =1 ; i <=n; i++){
       cin >> arr[i];
   }
   for(int i = l; i <=r; i++){
       sum += arr[i];
   }
   cout <<sum;
}  

/*  int n;
    cin>> n;
    int l,r, sum = 0;
    cin >> l >> r;
    l--; /* осы кезде биз буларды азайтамыз 
    r--;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    while(l <= r){
        sum += arr[l];
        l++;
    }
    cout << sum; */