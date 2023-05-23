#include <bits/stdc++.h>
using namespace std;

int maim(){
    int a;
    cin >> a;
    if (a%4 == 0 && a%100 != 0 || a%400 == 0){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}