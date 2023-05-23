#include <bits/stdc++.h>
using namespace std;

double percent_of_girls(int n, int m){
    double x = (100 * m)/(n * 1.0);
    return x;
}

int main(){
    int n, m;
    cin >> n >> m;
    cout << percent_of_girls(n,m);
}
