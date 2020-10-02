/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
   ll t;
   cin>>t;
   while(t--){
       ll n,m;
       cin>>n>>m;
       
       ll coin[n];
       
       for(ll i=0;i<n;i++)
       cin>>coin[i];
       
       ll dp[m+1]; 
  
       dp[0] = 0; 
  
    
    for (ll i=1; i<=m; i++) 
        dp[i] = INT_MAX; 
  
 
    for (ll i=1; i<=m; i++) 
    {
        
     for (ll j=0; j<m; j++) {
          if (coin[j] <= i) 
          { 
              ll res = dp[i-coin[j]]; 
              if (res != INT_MAX && res + 1 < dp[i]) 
                  dp[i] = res + 1; 
          } 
     }
     
    } 
    
    cout<< dp[m]<<"\n"; 

   }

    return 0;
}
