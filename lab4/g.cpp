 #include <bits/stdc++.h>
using namespace std;

int main (){
    int n,num = 1;
    cin >> n;
    int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j =0; j< n; j++){
            if( j == n - num){
                cout << num;
            }else {
                cout << ".";
            }
        }
        cout << endl;
        num++;
    }
}

/*
n = 4
 1) num = 1  2) num = 2
i = 0
j = 0    0 = 4 - 1   j = 1   1 = 4 - 1   j = 2   2 = 4 - 1    j = 3   3 = 4 - 1
j = 0    0 = 4 - 2   j = 1   1 = 4 -2    j = 2   2 = 4 - 2    j = 3   3 = 4 - 2
осылай кете береди

...1
..2.
.3..
4...
*/