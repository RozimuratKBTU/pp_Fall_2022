#include <bits/stdc++.h>
using namespace std;

void read(int a[], int n){
    int value;
    for(int i = 0 ; i < n; i++){
        cin >> value;
        a[value]++;
    }
}
void print(int a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int count(int a[], int b[], int n){
    int cnt = 0;
    for(int i = 1; i < 100; i++){
        cnt += min(a[i], b[i]);
    }
    return cnt;
}

int main(){
    int a[101], b[101];
    for(int i = 0; i < 100; i++){
        a[i] = b[i] = 0;

    }
    int n;
    cin >> n;

    read(a,n);
    read(b,n);
    cout << count(a,b,n) << endl;

}