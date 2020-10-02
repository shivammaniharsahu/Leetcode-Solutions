#include<bits/stdc++.h>
using namespace std;
int vis[100001];
int col[100001];
vector<int> ar[100001];
bool dfs(int n,int c)
{
	vis[n]=1;
	col[n]=c;
	for(int i=0;i<ar[n].size();i++)
	{
		if(vis[ar[n][i]]==0)
		{
			if(dfs(ar[n][i],c^1)==false)
			{
				return false;
			}
		}
		else
		{
			if(col[n]==col[ar[n][i]])
			{
				return false;
			}
		}
	}
	return true;
}
int main()
{
	bool res;
	int n,m,a,b,flag=1;
	cin>>n>>m;
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
			res=dfs(i,1);
			if(res==false)
			{
				flag=0;
				break;
			}
		}
	}
	if(flag==0)
	{
		cout<<"IMPOSSIBLE";
	}
	else
	{
		for(int i=1;i<=n;i++)
		{
			if(col[i]==0)
			{
				cout<<2<<" ";
			}
			else
			{
				cout<<1<<" ";
			}
		}
	}
	return 0;
}
