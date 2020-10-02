#include<bits/stdc++.h>
using namespace std;
int ans=-1;
void solve(vector<int> v,int k,int index)
{
	if(v.size()==0)
	{
		ans=v[0];
		return;
	}
	index = (index+k)%v.size();
	v.erase(v.begin()+index);
	solve(v,k,index);
	return;
}
int main()
{
	int n,k;
	cin>>n>>k;
	int index=0;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		v[i]=i+1;
	}
	k--;
	solve(v,k,index);
	cout<<ans;
	return 0;
}
