#include<bits/stdc++.h>
using namespace std;
bool sortinrev(const pair<int,int> &a,
               const pair<int,int> &b)
{
       return (a.first > b.first);
}
int main(){
 int l,d,v;
 double g,r;
 cin>>l>>d>>v>>g>>r;
 double f_t = d/(v*1.00);
 cout<<fixed<<setprecision(8);
 int i=0;
 double t = 0;
 while(1){
        if(i%2==0){
            t = t+g;
        }else t =t + r;
 
    if(f_t<t){
        if(i%2!=0){
            f_t = t;
        }
        break;
    }
    i++;
 }
 
 double l_t = (l-d)/(v*1.00);
 cout<<fixed<<setprecision(8);
 cout<<l_t+f_t;
 
 
 
}
