#include <bits/stdc++.h>
using namespace std;
void remove(vector<int>&v)
{
	vector<int>::iterator end = v.end();
	vector <int> ::iterator it;
    for (it = v.begin(); it != end; ++it) {
        end = remove(it + 1, end, *it);
    }
 
    v.erase(end, v.end());
}
 
int main(){
	int n;
	cin >>n;
	vector<int>v(n);
	for(int i = 0; i < n;i++)
	{
		cin >>v[i];
	}
    remove(v);
	do {
		
        for(int i = 0; i < v.size(); i++){
         cout<<v[i]<<" ";}
         cout <<endl;
    } while(next_permutation(v.begin(), v.end()));
return 0;
}
