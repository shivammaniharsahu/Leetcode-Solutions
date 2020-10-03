#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int r,c;
	    cin>>r>>c;
	    int a[r][c];
	    for(int i=0;i<r;i++){
	        for(int j=0;j<c;j++){
	            cin>>a[i][j];
	        }
	    }
	    int row[r]={0},col[c]={0};
	    for(int i=0;i<r;i++){
	        for(int j=0;j<c;j++){
	            if(a[i][j]==1){
	                row[i]=1;
	                col[j]=1;
	            }
	        }
	    }
	    for(int i=0;i<r;i++){
	        for(int j=0;j<c;j++){
	            if(row[i]==1||col[j]==1){
	                a[i][j]=1;
	            }
	        }
	    }
	    for(int i=0;i<r;i++){
	        for(int j=0;j<c;j++){
	            cout<<a[i][j]<<" ";
	        }
	        cout<<"\n";
	    }
	}
	return 0;
}