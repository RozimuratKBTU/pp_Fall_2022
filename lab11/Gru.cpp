#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <string , int> m;
    map <string, int> res;
    for(int i = 0; i< n; ++i){
        string s; int x;
        cin >> s >> x;
        if(m[s]!=x){
            m[s] = x;
            res[s]++;
        }

    }
    map <string , int> :: iterator it = res.begin();
    for(it; it!=res.end(); ++it){
        if(it->second >= 3){
            cout << it->first << " " << "+1" << endl;   
        }
        else{
            cout << it->first << " " << "NO BONUS" << endl;
        }
    }
}