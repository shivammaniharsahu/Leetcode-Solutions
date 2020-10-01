#include<iostream>
using namespace std;
int main () {
	long int n;
	cin>>n;
	long int res=0;
	for(int i=5;i<=n;i*=5)
	res+=n/i;
	cout<<res<<"\n";
	}
