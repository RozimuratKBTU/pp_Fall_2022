#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	vector<int>res;
	vector<int>odd;
	vector<int>even;
	for(int i = 0; i < n; i++)
	{
		if(v[i]!=v[i+1]) res.push_back(v[i]);
		else i++;
	}
	if(res.size()>1) cout <<"Impossible";
	else{
		if(res.empty()){
    	for(int i = 0; i < n; i++)
    	{
    		if(i % 2==0) even.push_back(v[i]);
    		else odd.push_back(v[i]);
		}
		for(int i = 0; i < even.size(); i++)
		{
			cout << even[i] <<" ";
		}
		reverse(odd.begin(), odd.end());
		for(int i = 0; i < odd.size(); i++)
		{
			cout << odd[i] <<" ";
		}
		}
		else
		{
			for(int i = 0; i < n; i++)
    	{
    		if(res[0]==v[i])
    		{
    			v.erase(v.begin()+i);
    			break;
			}
		}
			
			for(int i = 0; i < v.size(); i++)
    	{
    		if(i % 2==0) even.push_back(v[i]);
    		else odd.push_back(v[i]);
		}
		for(int i = 0; i < even.size(); i++)
		{
			cout << even[i] <<" ";
		}
		reverse(odd.begin(), odd.end());
		cout << res[0] <<" ";
		for(int i = 0; i < odd.size(); i++)
		{
			cout << odd[i] <<" ";
		}
		}
	}
return 0;
}