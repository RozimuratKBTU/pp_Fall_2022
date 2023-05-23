#include <iostream> 
using namespace std; 
int main(){ 
    int n; 
    cin >> n; 
    int a[n][n]; 
    for(int i = 0; i < n; i++){ 
        for(int j = 0; j < n; j++){ 
            cin >> a[i][j]; 
        } 
    } 
    int x = 0, y = 0; 
    int mx = a[0][0]; 
    for(int i = 0; i < n; i++){ 
        for(int j = 0; j < n; j++){ 
            if(i == j){ 
                if(a[i][j] > mx){ 
                    mx = a[i][j]; 
                   x = i; 
                   y = j; 
                } 
            } 
        } 
    } 
    cout << "Maximum element is: " << mx << " with coordinates: " << x+1 << ";" << y+1; 
}