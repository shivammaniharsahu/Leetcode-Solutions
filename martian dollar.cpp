    #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
        int n,d;
        cin>>n>>d;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int m=d;
        vector<int>v;
        int max_;
        for(int i=0;i<n;i++){
            if(a[i]>=a[i+1]){
                v.push_back(m);
            }else{
     
                max_ = a[i];
                for(int j=i+1;j<n;j++){
                    if(a[j]>max_){
                        max_ = a[j];
                    }
     
                }
                m = (d/a[i])*max_ + d%a[i];
                v.push_back(m);
            }
        }
        sort(v.begin(),v.end(),greater<int>());
        cout<<v[0];
    }
