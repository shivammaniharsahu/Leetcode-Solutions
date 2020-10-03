#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int i=n-1;
	    while(i>0){
	        if(a[i]>a[i-1]){
	            break;
	        }
	        i--;
	    }
	    if(i==0){
	        cout<<"-1";
	        break;
	    }
	    int x=a[i-1],z=i;
	    for(int j=z+1;j<n;j++){
	        if(a[j]<a[z]&&a[j]>x){
	            z=j;
	        }
	    }
	    swap(a[z],a[i-1]);
	    sort(a+i,a+n);
	     for(int k=0;k<n;k++){
	        cout<<a[k]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}