#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long sum =0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int num;
            cin >> num;
            if(j == n - i -1){
                sum += num;
            }
        }
    }
    cout << sum;
}