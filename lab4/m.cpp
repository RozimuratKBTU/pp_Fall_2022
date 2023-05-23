#include <iostream>
using namespace std;
int main () {
    int n, num = 1;
    cin >>  n;
    int a[n][n];
    int direction = 0;
    int left = 0, right = n-1, up = 0, down = n-1;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
             a[i][j]=0;
        }
    }
    while(num != n*n+1){
        if (direction == 0){
            for(int i=left; i<=right; i++){
                a[up][i]=num;
                    num++;
                }
                up++;
            }else if (direction == 1){
                for (int i=up; i<=down; i++){
                    a[i][right]=num;
                    num++;
                }
                right--;
            }else if(direction == 2){
                for(int i=right; i>=left; i--){
                    a[down][i] = num;
                    num++;
                }
                down--;
            }else if(direction == 3){
                for (int i=down; i>=up; i--){
                    a[i][left]=num;
                    num++;
                }
                left++;
          }
          direction=(direction+1)%4;
        }
        for (int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }