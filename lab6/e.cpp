#include <bits/stdc++.h>
using namespace std;

void hypo(double a, double b, double c){
    cout << c;
}
int main(){
    double a, b;
    cin>> a >> b;
    double c = sqrt(a*a + b*b);
    hypo(a, b, c);
}