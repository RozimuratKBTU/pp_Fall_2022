#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n,m,a;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            a = sqrt(arr[i][j]);
            if(a*a == arr[i][j]){
                arr[i][j] = a;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j]<< " ";
            cout << endl;
        }
    }

}