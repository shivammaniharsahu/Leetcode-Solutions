#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,x,y,z,m,n;
    int t;
cin>>t;
while(t--){
    cin>>n;
   int A[n][n];
   for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        A[i][j]=0;
    }
   }
   for(i=0;i<n;i++){
       A[i][i]=1;
   }
   j=0;
   for(i=n-1;i>=0;i--){
       A[j][i]=1;
       j++;
   }
   if(n%2==1)
   {x=n/2;
   A[0][x]=1;
   A[x][0]=1;

   }
   for(i=0;i<n;i++){
       for(j=0;j<n;j++){
           cout<<A[i][j]<<" ";
       }
       cout<<endl;
   }
}
}
