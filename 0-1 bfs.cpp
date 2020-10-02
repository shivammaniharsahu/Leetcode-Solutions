#include<bits/stdc++.h>
using namespace std;
int dist[1001];
vector<pair<int,int> >ar[1001];
void BFS(int start)
{
	deque<int> q;
	q.push_front(start);
	dist[start]=0;
	while(!q.empty())
	{
		int curr=q.front();
		q.pop();
		for(int i=0;i<ar[curr].size();i++)
		{
			if(dist[ar[curr][i].first] > dist[v]+ar[curr][i].second)
			{
				dist[ar[curr][i].first] = dist[v]+ar[curr][i].second;
			}
			if(ar[curr][i].second==0)
			{
				q.push_front(ar[curr][i].first);
			}
			else
			{
				q.push_back(ar[curr][i].first);
			}
		}
	}
}
int main()
{
	
	int n,m,a,b,wt;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		dist[i]=INT_MAX;
	}
	for(int i=1;i<=m;i++)
	{
		cin>>a>>b>>wt;
		ar[a].push_back(make_pair(b,wt));
		ar[b].push_back(make_pair(a,wt));
	}
	BFS(0);
}
