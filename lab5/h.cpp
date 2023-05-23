#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;                            //112233    mainct = 2
    int maincnt = 0;
    for(int i = 0; i < s.size(); i++){
        int cnt = 0;
        for(int j = 0; j < s.size(); j++){
            if(s[i] == s[j]) cnt++;
        }
        if(maincnt == 0){
            maincnt = cnt;
        }
        else{
            if(maincnt != cnt){
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";   
}