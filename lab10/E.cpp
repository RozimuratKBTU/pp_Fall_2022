#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum = 0;
    map <string, double> m;
    for(int i = 0; i< n; ++i){
        int x;
        cin >> x;
        for(int j = 0; j< x; ++j){
            string s;
            int d;
            cin >> s >> d;
            sum+=d;
            m[s] = m[s] + d;
        }
    }    
    map <string, double> :: iterator it;
    for(it = m.begin(); it!=m.end(); ++it){
        cout << (*it).first << " " <<  (*it).second * 100 /sum << endl;
    }
}