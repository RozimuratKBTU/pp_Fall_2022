#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    bool found = false;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int x;
    cin >> x;
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            found  = true;
        }
    }
    if(found  == true){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}