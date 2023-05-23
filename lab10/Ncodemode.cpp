#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
bool isPolindrom(int arr[]){
    for(int i = 0; i< n/2; ++i){
        if(arr[i] != arr[n-i-1]) return false;

    }
    return true;
}
int main(){
    cin >> n;
    int arr[n];
    for(int i = 0; i< n; ++i){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    while(next_permutation(arr, arr+n)){
        if(isPolindrom(arr)){
            for(int i = 0; i< n;++i){
                cout << arr[i] <<" ";
            }
            return 0;
        }

    }
    cout << "Impossible";
}