#include <iostream>
using namespace std;

int even(string s, int i, int cnt){
    if(i == s.size()) return cnt;
    if((s[i] - '0') % 2 == 0){
        cnt++;
    }
    return even(s,++i, cnt);
}
int main(){
    string s;
    cin >> s;
    cout << even(s, 0, 0);

}
