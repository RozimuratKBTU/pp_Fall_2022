#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>> a >> b;
    int k = b%10; /* k деген бастапкы саны*/
    int n = b/100;  /* n деген сонгы саны*/
    cout << (n+k)+a; /* бастапкы сан мен сонгы санды косамыз да оган берилген санды косамыз*/
 }    