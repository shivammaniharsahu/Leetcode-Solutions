#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int n,i,nd,pos1,symb,pos2,ans=0,l=0,d=0;
	cin>>n;
	int s[n];
	for(i=0;i<n;i++)
	{
		cin>>s[i];
	}
	for(i=0;i<n;i++)
	{
		if(s[i]==1)
		{
			nd++;
			if(nd>ans)
			{
				ans=nd;
			}
		}
		else if(s[i]==2)
		{
			if(nd>0)
			{
				nd--;
			}
		}
		/*if(l==0)
		{
			if(nd>ans)
			{
				ans=nd;
				pos1=i;
			}
			nd=0;
		}*/
	}
	cout<<ans;
	return 0;
}
