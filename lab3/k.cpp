#include <iostream>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i <n; i++){
        cin >> arr[i];
    }
    
    for(int i =0; i <n; i++){
        if(arr[i] == arr[i+1]){ // егер санымыз жанындагы санга тен болса континью болады
            continue;
        }
        cout << arr[i];
    }
}


    /*  int n;
    cin >> n;
    int arr[n+1];
    for (int i = 0; i <n; i++){
        cin >> arr[i];
    }
    arr[n] = 1000000;
    for (int i=0; i<n; i++){
            if(arr[i] == arr[i+1]){
                continue;
            }
            cout << arr[i] << " ";
        } */