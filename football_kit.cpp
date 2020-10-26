#include <iostream>

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x,y;
    vector<pair<int, int>>a;
    int b[100001] ={0};
    for(int i=0;i<n;i++){
        cin>>x>>y;
        a.push_back(make_pair(x,y));
        b[x]++;

        }

   int c,d;
    for(int i=0;i<n;i++){
       c=n-1;
       c= c+b[a[i].second];
        d= (n-1)-b[a[i].second];
        cout<<c<<" "<<d<<"\n";
    }
}
