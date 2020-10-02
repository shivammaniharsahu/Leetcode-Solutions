#include<bits/stdc++.h>
using namespace std;
char ar[1001][1001];
bool vis[1001][1001];
int n,m;
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
char direction[4]={'U','R','D','L'};
int path[1001][2];
bool isValid(int x,int y)
{
	if(x<1 || x>n || y<1 || y>m)
	{
		return false;
	}
	if(vis[x][y] || ar[x][y]=='#')
	{
		return false;
	}
	return true;
}
void bfs(int srcx,int srcy)
{
    queue<pair<int,int> >q;
    q.push(make_pair(srcx,srcy));
	vis[srcx][srcy]=true;
	while(!q.empty())
	{
		int currx=q.front().first;
		int curry=q.front().second;
	    q.pop();
		for(int i=0;i<4;i++)
		{
	        int newx=currx+dx[i];
			int newy=curry+dy[i];
			if(isValid(newx,newy))
			{
				path.push_back(direction[i]);
				vis[newx][newy]=true;
				q.push(make_pair(newx,newy));
			}
		}
	}
	cout<<path;
}
int main()
{
	cin>>n>>m;
    int srcx,srcy;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>ar[i][j];
            if(ar[i][j]=='A')
			{
				srcx=i; srcy=j;
			}
		}
	}
    bfs(srcx,srcy);
	return 0;
}
