#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        if (x== 0) cnt++;
        while ( x != 0){
            if (x%10 ==0){
                cnt++;
            }
            x/=10;
        }

    }
    cout << cnt;
}