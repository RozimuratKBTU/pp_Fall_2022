#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0 ; i < n; i++){
        cin >> arr[i];
    }
    int mx = arr[0];
    int pos = 0;
    for(int i = 0; i < n; i++){
        if(mx < arr[i]){
            mx = arr[i];
            pos = i + 1;
        }
    }
    cout << pos;
}  

    