#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0;
    for(int i =1 ; i <= n; i++){
        sum += i;
    }
    cout << sum;
}

/*int main(){
    int n;
    cin >> n;
    int sum = 0;
    int i = 1;
    while(i <= n){
        sum += i;
        i++;
    }
    cout << sum;
}*/