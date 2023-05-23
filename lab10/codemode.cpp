#include <iostream>
#include <algorithm>
using namespace std;
void SIUU(int x){
    string result = "";
    if(x == 0) result = "0";
    while(x!=0){
        result= char(x%2+48) + result;
        x/=2;

    }
    cout << result << endl;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i< n; ++i){
        cin >> arr[i];
    }
    for_each(arr, arr+n, SIUU);
}