#include <bits/stdc++.h>
using namespace std;

void queue_push(vector<int> & v, int value) {
 v.push_back(value);
}
bool queue_empty(vector<int> v) {
 return v.size() == 0;
}
void queue_pop(vector<int> &v) {
 v.erase(v.begin(), v.begin()+1);
}
int queue_front(vector<int> v) {
 return v[0];
}
void queue_printAll(vector<int> v) {
 while(!queue_empty(v)) {
 int front = queue_front(v);
 queue_pop(v);
 cout<<front;
 }
}
