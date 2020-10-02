#include<bits/stdc++.h>
using namespace std;
vector<int> ar[100001];
int vis[100001], low[100001], in[100001];
int timer;
set<int> AP;
void dfs(int node,int par)
{
	vis[node]=1;
	in[node]=low[node]=timer++;
	int child_cnt=0;
	for(int i=0;i<ar[node].size();i++)
	{
		if(ar[node][i]==par)
		{
			continue;
		}
		if(vis[ar[node][i]]==1)
		{
			//edge node-child is a back edge
			low[node]= min(low[node], in[ar[node][i]]);
		}
		else
		{
			//edge node-child is a forward edge
			dfs(ar[node][i],node);
			child_cnt++;
			low[node]= min(low[node], low[ar[node][i]]);
			if(low[ar[node][i]]>=in[node] && par!=-1)
			{
				AP.insert(node);
			}
		}
	}
	if(par == -1 && child_cnt>1)
	{
		AP.insert(node);
	}
}
int main()
{
	int n,m,a,b;
	while(1)
	{
		cin>>n>>m;
		if(n==0 && m==0)
		{
			break;
		}
		for(int i=1;i<=n;i++)
		{
			ar[i].clear();
			vis[i]=0;
			AP.clear();
			timer=1;
		}
		for(int i=1;i<=m;i++)
		{
			cin>>a>>b;
			ar[a].push_back(b);
			ar[b].push_back(a);
		}
		for(int i=1;i<=n;i++)
		{
			if(vis[i]==0)
			{
				dfs(i,-1);
			}
		}
		cout<<AP.size()<<"\n";
	}
	return 0;
}
