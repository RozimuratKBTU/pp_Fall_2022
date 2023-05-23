#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    int brr[n];
    for(int i = 0; i< n;++i){
        cin >> arr[i];
        brr[i] = arr[i];

    }
    reverse(brr , brr+n);
    for(int i = 0; i< n;++i){
        if(arr[i] == brr[i]) cout << "OK" << endl;
        else cout << "Instead of " << arr[i] << " here was " << brr[i] << endl;
    }

}