#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main(){
    queue <string> q;
    vector <string> v;
    int n;
    cin >> n;
    for(int i = 0; i< n; ++i){
        int x;
        string d;
        cin >>x;
        if(x ==1){
            cin>> d;
            q.push(d);
        }
        else{
            v.push_back(q.front());
            q.pop();
        }

    }
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }
}