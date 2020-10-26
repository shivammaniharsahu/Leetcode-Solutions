#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,x,y,z;
    std::vector<int>v,v1,v2 ;
    double a=0.0000000000,b,c=3.1415926536;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.rbegin(),v.rend());
    for(i=0;i<n;i++){
        if(i%2==0)
        a=a+c*v[i]*v[i];
        else
        a=a-c*v[i]*v[i];
    }
    cout<<fixed<<setprecision(10)<<a<<endl;

}
