#include <bits/stdc++.h>
using namespace std;

void max(int n,int a[]){
    int mx = a[0];
    for(int  i =0; i < 4;i++){
        if(a[i] > mx){
            mx = a[i];
        }
    }
    cout << mx;
}
int main(){
    int n;
    int a[4];
    for(int i = 0; i < 4;i++){
        cin >> a[i];
    }
    max(n,a);
}