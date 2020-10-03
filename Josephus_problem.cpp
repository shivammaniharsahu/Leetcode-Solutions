#include <bits/stdc++.h>
using namespace std;

int josephus(int n, int k);

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		cout<<josephus(n,k)<<endl;
	}
	return 0;
}
int josephus(int n, int k)
{
   if(n==1){
       return 1;
   }
   return (josephus(n-1,k)+(k-1))%n+1;
}
