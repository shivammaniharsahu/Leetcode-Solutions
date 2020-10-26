#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,i,j,x,y,z=0,k,p,q,l,r,u=0;
    std::vector<pair<int, int>>v,v1,v2 ;
    vector<int>v3,v4;
    cin>>p>>q>>l>>r;
    for(i=0;i<p;i++){
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    for(i=0;i<q;i++){
        cin>>x>>y;
        v1.push_back(make_pair(x,y));
    }
    k=0;
    x=l;
    for(i=l;i<=r;i++){
       for(j=0;j<q;j++){
            if(k==0){
v1[j].first=v1[j].first+x+k;
v1[j].second=v1[j].second+x+k;}
else
{
   v1[j].first=v1[j].first+k;
v1[j].second=v1[j].second+k;

}
    }
    for(j=0;j<p;j++){
        for(m=0;m<q;m++){
            if(v[j].first==v1[m].first || v[j].first==v1[m].second || v[j].second==v1[m].second|| v[j].second==v1[m].first
            || (v[j].first<=v1[m].first && v[j].second<=v1[m].second && v[j].second>=v1[m].first) || (v[j].first>=v1[m].first && v[j].first<=v1[m].second)
            || (v[j].second>=v1[m].first && v[j].second<=v1[m].second) || (v[j].first<=v1[m].first && v[j].second>=v1[m].second)){
               z++;
               j=p+1;
               m=q+1;
               break;
            }
        }
    }

    k=1;

    }
    cout<<z<<endl;
}
