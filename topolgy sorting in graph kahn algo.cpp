#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1000001],res;

int in[1000001];
int i;
void kahn(int n)
{
	queue<int> q;
	for(int i=1;i<=n;i++)
	{
		if(in[i]==0)
			q.push(i);
	}
			while(!q.empty())
			{
				int curr =q.front();
				res.push_back(curr);
				q.pop();
				for(int node:adj[curr])
				{
					in[node]--;
					if(in[node]==0)
						q.push(node);
				}	
			}
			cout<<"topsort";
			for(int node:res)
			cout<<node<<" ";
}
int main()
{
	int c=0,i,j,n,m,x,y;
	cin>>n;
	cin>>m;
	for(i=1;i<m;i++)
	{
		cin>>x>>y;
		adj[x].push_back(y);
		in[y]++;
	}
	kahn(n);
		
	
}
