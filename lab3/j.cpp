#include <iostream>
using namespace std;
 
int main(){
    int n, m;
    cin >> n >> m;
    int arr[n];
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    if (arr[n-1]<=m){
    cout << n;
    }
    else{
        for(int i =0; i < n; ++i){
            if (arr[i]<=m and arr[i+1]>m){
                cout << ++i;
                return 0;
            }
        }
    }
}

/* int main (){
    int n, m;
    cin >> n >> m;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i] == m){
            cout << i+1;
            return 0;
        }
        if(m < a[i]){
            cout << i;
            return 0;
        }
    }
    cout << n;
}
*/