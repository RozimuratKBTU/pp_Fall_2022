#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    for( int i = 2; i<= sqrt(n);i++){
        if(n % i == 0){
            return false;
        }
    }
     return true;
}
int main(){
    int n; 
    cin >> n;
    int cnt = 0;
    vector <int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int k;
    cin >> k;
    for(int i = 0; i < v.size(); i++){
      if(isPrime(v[i]) == true and v[i] >= k){
          cnt++;
      }  
    }
    cout << cnt;
}

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// bool isPrime(int number)
//   {
    
//     for (int i=2; i<number; i++)
//     { if(number% i==0)
//       return false;
//     }
//     return true;
//   }

// int main(){
//     int n,a;
//     cin>>n;
//     int x;
//     vector <int> v;
//     for(int i=0;i<n;i++){
//         cin>>x;
//         v.push_back(x);
//     }
    
//     cin>>a;
//     int cnt=0;
    
    
//     for(int i=0;i<v.size();i++){
//         if(isPrime(v[i]) && v[i]>=a)
//         cnt++;
//     }
//     cout<<cnt;
//     return 0;
// }