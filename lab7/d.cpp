#include <iostream>
using  namespace std;

long long sum(int n, int summa){
    if(n == 0) return summa;
    int last = n%10;
    summa += last;
    return sum(n/10, summa);
}

int main(){
    int n;
    cin >> n;
    cout << sum(n, 0);

}