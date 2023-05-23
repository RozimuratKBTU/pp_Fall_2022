#include <iostream>
using namespace std;

bool binary(int n, int a[], int x, int i){
    if(i == n) return false;
    if(a[i] == x) return true;
    return binary(n, a, x, ++i);
}
    
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int x;
    cin >> x;
    int i = 0;
    if(binary(n, a, x, i)) cout << "YES";
    else cout << "NO";
}
    