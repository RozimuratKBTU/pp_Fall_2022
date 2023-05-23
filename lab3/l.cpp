#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin>> a[i];
    }
    cin >>m;
    int b[m];
    for(int i =0; i <m; i++){
        cin >> b[i];
    }
    int c[n + m];
    for (int i =0; i < n; i++){
        c[i] =a[i];
    }
    int k =0;
    for(int i = n; i < n+m; i++){
        c[i] =b[k];
        k++;
    }
    sort(c, c+n+m);
     for(int i =0; i <n + m;i++){
       cout << c[i]<<" ";
     }
}


    /*int n;
    cin >> n;
    int a[n + 1];
    for (int i = 0; i < n; i++) cin >> a[i];
    int m;
    cin >> m;
    int b[m + 1];
    for (int i = 0; i < m; i++) cin >> b[i];
    a[n] = INT_MAX, b[m] = INT_MAX;
    int l = 0, r = 0, cur = 0;
    int c[n + m];
    while (l < n || r < m) {
        if (a[l] <= b[r]) {
            c[cur] = a[l];
            l++;
        }
        else {
            c[cur] = b[r];
            r++;
        }
        cur++;
    }
    for (int i = 0; i < n + m; i++) cout << c[i] << ' ';
    return 0; */