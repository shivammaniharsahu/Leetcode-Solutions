#include<bits/stdc++.h>
using namespace std;
bool isprime(int x){
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0)
return false;
    }
    return true;
};
int main()
{
    long long n,i,j,x,y,z;
    std::vector<long long>v;
    vector <int> v1,v2 ;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    for(i=0;i<v.size();i++){
        x=sqrt(v[i]);
if(v[i]==1 || (v[i]/x!=x && v[i]%x!=0))
    cout<<"NO"<<endl;
        else if(isprime(x) && (v[i]/x==x && v[i]%x==0))
        cout<<"YES"<<endl;
          else
        cout<<"NO"<<endl;
    }
}