#include <iostream>
using namespace std;

int main(){
    int n;
    cin >>n;
    int a = n%2;
    n =n/2;
    int b = n%2;
    n = n/2;
    int c = n%2;
    n = n/2;
    int d = n%2;
    
    cout << d*1 + c*2 + b*4 +a*8;
}

 /*13%2 ==>   1 a
  13/2 -> 6
  6 % 2 ==>   0 b
  6 / 2 -> 3
  3 % 2 ==>   1 c
  1 % 2 ==>   1 d
  */


