#include <iostream>
#include <queue>
using namespace std;
queue<pair<int, int>>q;
    int a[8][8];
    
void step(int x, int y, int t){
    if(x >= 0 and y >= 0 and x < 8 and y < 8){
        if(a[x][y] == -1){
            a[x][y] = t + 1;
            q.push(make_pair(x,y));
        }
    }
}

        
        
        
int main(){
    
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            a[i][j] = -1; //али ешкайсысында болмадык
        }
    }
    
    int x,y;
    cin >> x >> y;
    
    a[x][y] = 0;
    q.push(make_pair(x,y));
    
    int x2,y2;
    cin >> x2 >> y2;
    
    while(!q.empty()){
        pair<int,int> cur = q.front();
        q.pop();
        int cx = cur.first;
        int cy = cur.second;
        step(cx + 1, cy - 2, a[cx][cy]);
        step(cx - 1, cy - 2, a[cx][cy]);
        step(cx + 2, cy - 1, a[cx][cy]);
        step(cx - 2, cy - 1, a[cx][cy]);
        step(cx - 2, cy + 1, a[cx][cy]);
        step(cx + 2, cy + 1, a[cx][cy]);
        step(cx + 1, cy + 2, a[cx][cy]);
        step(cx - 1, cy + 2, a[cx][cy]);
        
    }
    
    for(int i = 0; i <8; i++){
        for(int j = 0; j < 8; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
    
    cout << a[x2][y2];
    return 0;
}