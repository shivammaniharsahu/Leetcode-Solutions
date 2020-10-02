#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ar[1001];
	int n,res=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	for(int i=0;i<n;i++)
	{
		res = res^(2*ar[i]);
	}
	cout<<res;
	return 0;
}
