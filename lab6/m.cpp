#include <bits/stdc++.h>
using namespace std;

void reverse(int n, int a[]){
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = n - 1; i >=0; i--){
        cout << a[i]<<" ";
    }
    cout << endl;
}
int main(){
    int n;
    int a[n];
    cin >> n;
    reverse(n, a);
}