#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ar[100001], st[400004];
void build(ll si , ll ss , ll se)
{
	if(ss == se)
	{
		st[si] = ar[ss];
		return ;
	}
	ll mid = (ss + se) / 2;
	build(2*si , ss , mid);
	build(2*si+1 ,mid+1 , se);
	st[si] = st[2*si] + st[2*si+1];
}
ll query(ll si , ll ss , ll se , ll qs , ll qe)
{
	if(ss > qe || se < qs) return 0;
 
	if(ss >= qs && se <= qe) return st[si];
 
	ll mid = (ss + se) / 2;

	return query(2*si , ss , mid , qs , qe) + query(2*si+1 , mid+1 , se , qs , qe); 
}
void update(ll si, ll ss, ll se,ll qi,ll val)
{
	if(ss == se)
	{
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
	st[si] = st[2*si] + st[2*si+1];
}
int main()
{
	ll n , q , l , r, code;
	cin>>n>>q;
	for(ll i=1;i<=n;i++) cin>>ar[i];
 
	build(1 , 1 , n);
 
	while(q--)
	{
		cin>>code;
		if(code==1)
		{
			update(1 , 1 , n , l , r);
		}
		else if(code==2)
		{
			cin>>l>>r;
			cout<<query(1 , 1 , n , l , r)<<endl;
		}
	}
	return 0;
}
