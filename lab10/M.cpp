#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin>>n>>m;
	vector<int>v1(n);
	vector<int>v2(m);
	vector<int>res;
	for(int i = 0; i < n; i++)
	{
		cin >>v1[i];
	}
	for(int i = 0; i < m; i++)
	{
		cin >>v2[i];
	}
	vector<int> :: iterator it;
	it = unique(v1.begin(), v1.end());
	v1.resize(distance(v1.begin(),it) );
	it = unique(v2.begin(), v2.end());
	v2.resize(distance(v2.begin(),it) );
	for(int i = 0; i < (v1.size()+v2.size()); i++)
	{
		res.push_back(v1[i]);
		if(res.size()==(v1.size()+v2.size())) break;
		res.push_back(v2[i]);
		if(res.size()==(v1.size()+v2.size())) break;
	
	}
	it = unique(res.begin(), res.end());
	res.resize(distance(res.begin(),it));
	for(int i = 0; i < res.size(); i++)
	{
		cout <<res[i]<<" ";
	}
return 0;
}
