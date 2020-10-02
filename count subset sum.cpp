#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int subsetsum(int ar[],int n,long sum)
{
	
			int  dp[n+1][sum+1];
			int i,j;
			for(i=1;i<sum+1;i++)
			{
				dp[0][i]=false;
			}
			for(i=0;i<n+1;i++)
			{
				dp[i][0]=true;
			}
			dp[0][0]=true;
			for(i=1;i<=n;i++)
			{
				for(j=1;j<=sum;j++)
				{
					if(ar[i-1]<=j)
					{
						dp[i][j]=dp[i-1][j-ar[i-1]]+dp[i-1][j];
					}
					else
					{
						dp[i][j]=dp[i-1][j];
					}
					
				}	
				
			}		
			return dp[n][sum];
				

}


int main()
{ 
	int t;
	cin>>t;
	while(t--)
	{
			int n,sum;
			cin>>n>>sum;
			int ar[n];
			long  i,j;
			for(i=0;i<n;i++)
			{
				cin>>ar[i];	
			}
			int res=subsetsum(ar,n,sum);
			cout<<res;
			cout<<endl;
	}
	return 0;
}
