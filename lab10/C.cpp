#include <iostream>
#include <stack>
#include <cmath>
using namespace std;
int main(){
    stack <int> c;
    string n;
    cin >> n;
    for(int i = 0; i<n.size(); ++i){
        int x, y;
       
        if(c.empty()) c.push(n[i]-48);
        else{
            x = c.top()*10 + (n[i]-48);
            y = sqrt(x);
            if(y*y == x) c.pop();
            else{
                c.push(n[i]-48);
            }
        }
    }
    if(c.empty()) cout << "Stack is empty";
    else{
        while(!(c.empty())){
            cout << c.top();
            c.pop();
        }
    }
}