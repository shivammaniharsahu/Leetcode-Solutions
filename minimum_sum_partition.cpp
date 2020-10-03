#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	cin>>x;
	while(x--){
	    int n;
	    cin>>n;
	    int a[n];
	    int s=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	         s=s+a[i];
	    }
	        bool t[n+1][s+1];
	        for(int j=0;j<=s;j++){
	            t[0][j]=false;
	        }
	        for(int i=0;i<=n;i++){
	            t[i][0]=true;
	        }
	        for(int i=1;i<=n;i++){
	            for(int j=1;j<=s;j++){
	                if(a[i-1]<=j){
	                    t[i][j]=t[i-1][j-a[i-1]]||t[i-1][j];
	                }
	                else{
	                    t[i][j]=t[i-1][j];
	                }
	            }
	        }
	       vector<int>v;
	       for(int j=0;j<=s/2;j++){
	           if(t[n][j]==true){
	               v.push_back(j);
	           }
	           
	       }
	       int m=INT_MAX;
	       for(int i=0;i<v.size();i++){
	           m=min(m,s-2*v[i]);
	       }
	       cout<<m<<"\n";
	}
	return 0;
}