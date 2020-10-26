#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,x,y,z;
    std::vector<int>v,v1 ;
    cin>>n;
    v.push_back(n);
    x=n;
    for(i=n-1;i>=1;i--){
        if(x%i==0){
           v.push_back(i);
           x=i;
        }
    }
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
