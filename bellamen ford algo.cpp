#include<bits/stdc++.h>
using namespace std;
vector<int> v[100001];
int dist[100001];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m,a,b,w;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		cin>>a>>b>>w;
		v[i].push_back(a);
		v[i].push_back(b);
		v[i].push_back(w);
	}
	dist[0]=0;
	for(int i=0;i<n-1;i++)
	{
		int j=0;
		while(v[j].size()!=0)
		{
			if(dist[v[j][1]] > dist[v[j][0]]+ v[j][2])
			{
				dist[v[j][1]] = dist[v[j][0]]+ v[j][2];
			}
			j++;
		}
	}
	return 0;
}
