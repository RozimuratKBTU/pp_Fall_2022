#include <bits/stdc++.h>
using namespace std;
bool prime(int a){
    if(a == 0 || a == 1 || a == -1) return 0;
    if(a < 0) a = a*(-1);
    for(int i = 2; i< a; ++i){
        if(a % i == 0) return 0;
    }
    return 1;

}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i< n; ++i){
        cin >> arr[i];
    }
    int cnt = count_if(arr, arr+n, prime);
    cout << cnt;
}