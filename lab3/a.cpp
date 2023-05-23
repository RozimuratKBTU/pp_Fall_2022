#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){             
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
       if(arr[i] %2 != 0){ 
          cout << arr[i] << " ";
        }
    }
}
// инкременты 
// i + 1 ==> i+=1 ==> i++
// i - 1 ==> i-=1 ==> i--
// i * m ==> i*=m
// i / n ==> i/=n
// i % n ==> i%=n
    