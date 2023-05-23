#include <iostream>
using namespace std;

int heater(int n, int cnt){
    if(n == 0) return cnt;
    int last = n%10;    
    return heater(n/10, cnt += last/2);
}

int main(){
    int n;
    cin >> n;
    cout << heater(n, 0);
}