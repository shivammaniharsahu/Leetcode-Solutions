#include<bits/stdc++.h>
using namespace std;
int ar[100001]; 
pair<int,int> st[400004];
void build(int si , int ss , int se)
{
	if(ss == se)
	{
		if(ar[ss]%2==1)
		{
			st[si]=make_pair(1,0);
		}
		else
		{
			st[si]=make_pair(0,1);
		}
		return ;
	}
	int mid = (ss + se) / 2;
	build(2*si , ss , mid);
	build(2*si+1 ,mid+1 , se);
	
	st[si].first = st[2*si].first + st[2*si+1].first;
	st[si].second = st[2*si].second + st[2*si+1].second;
}
void update(int si, int ss, int se,int qi,int val)
{
	if(ss == se)
	{
		if(ar[ss]%2==1)
		{
			st[si]=make_pair(0,1);
		}
		else
		{
			st[si]=make_pair(1,0);
		}
		ar[ss]=val;
		return ;
	}
	int mid = (ss + se) / 2;
	if(qi<=mid)
	{
		update(2*si,ss,mid,qi,val);
	}
	else
	{
		update(2*si+1,mid+1,se,qi,val);
	}
	st[si].first = st[2*si].first + st[2*si+1].first;
	st[si].second = st[2*si].second + st[2*si+1].second;
}
int getEven(int si, int ss, int se, int qs, int qe)
{
	if(ss > qe || se < qs) return 0;
 
	if(ss >= qs && se <= qe) return st[si].second;
 
	int mid = (ss + se) / 2;
	int l = getEven(2*si , ss , mid , qs , qe);
	int r = getEven(2*si+1 , mid+1 , se , qs , qe);
	return  l+r;
}
int getOdd(int si, int ss, int se, int qs, int qe)
{
	if(ss > qe || se < qs) return 0;
 
	if(ss >= qs && se <= qe) return st[si].first;
 
	int mid = (ss + se) / 2;
	int l = getOdd(2*si , ss , mid , qs , qe);
	int r = getOdd(2*si+1 , mid+1 , se , qs , qe);
	return  l+r;
}
int main()
{
	int n , q , code, l , r;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>ar[i];
 
	build(1 , 1 , n);
	cin>>q;
 
	while(q--)
	{
		cin>>code;
		if(code==0)
		{
			cin>>l>>r;
			if((ar[l]%2) == (r%2))
			{
				continue;
			}
			else
			{
				update(1,1,n,l,r);
			}
		}
		else if(code==1)
		{
			cin>>l>>r;
			cout<<getEven(1,1,n,l,r)<<endl;
		}
		else if(code==2)
		{
			cin>>l>>r;
			cout<<getOdd(1,1,n,l,r)<<endl;
		}
	}
	return 0;
}
