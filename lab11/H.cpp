#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    string s;
    cin >> n;
    cin >> s;
    for(int i = 0; i< s.size(); ++i){
        if(s[i] + n > 'Z') s[i] = (s[i]+n - 90) + 65 - 1;
        else s[i] = s[i] + n;
        cout << s[i];
    }
    // int n; string s;
    // cin >> n;
    // cin >> s;
    // for(int i = 0; i< s.size(); ++i){
    //     if(s[i] == 'Z' && n != 0) s[i] = s[i] -26 +n;
    //     else if(s[i] + n > 'Z' ) s[i] =s[i]-25 + ( n - ('Z' - s[i]) );
    //     else {
    //         s[i] = s[i] + n;
    //     }
    //     cout << s[i];
    // }

} 