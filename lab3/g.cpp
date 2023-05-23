#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int mx = arr[0];
    int mn = arr[0];
    for(int i = 0; i < n; i++){
        if(mx < arr[i]){
            mx = arr[i];
        }
        if(mn > arr[i]){
            mn = arr[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(arr[i] == mx){
            cout << mn << " ";
        }
        else{
            cout << arr[i] << " ";
        }
    }
}

/*  int mx =arr[0], mn=arr[0];
    for(int i = 0; i< n; i++){
        mx = max(mx, arr[i]);
        mn = min(mn, arr[i]);
    }
    for(int i = 0; i < n; i++){
        if(arr[i] == mx){
        arr[i] = mn;
        }
    }
    for(int i = 0; i < 0; i++){
        cout<< arr[i]<< " ";
    } */