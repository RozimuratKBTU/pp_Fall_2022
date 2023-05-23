
#include <bits/stdc++.h>

using namespace std;

bool degreeof2(int n,int i){
    if(n==pow(2,i)) return true;
    else if(pow(2,i)>n) return false;
    else return degreeof2(n,i+1);
}

int main(){
    int n;
    cin>>n;
    if(degreeof2(n,0)){
       cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}