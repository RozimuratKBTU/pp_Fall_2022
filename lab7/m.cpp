#include <iostream>
using namespace std;

int simple(int n){
    if(n == 1){
        return 1;
    }
    cout << n << " ";
    return simple(n-1);
}

int main(){
    int n;
    cin >> n;
    cout << simple(n);
}
