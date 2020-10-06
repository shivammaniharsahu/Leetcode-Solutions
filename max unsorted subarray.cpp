#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

vector<int> subUnsort(vector<int> a) {
    vector<int>b;
    int n = a.size();
    vector<int>f;
    for(int i=0;i<n;i++){
        b.push_back(a[i]);
    }
    sort(a.begin(),a.end());
    int i;
    for( i=0;i<n;i++){
        if(a[i]!=b[i]){
            f.push_back(i);
            break;
        }
    }
    n--;

    while( i<n && a[n]==b[n]){
        n--;
    }
    f.push_back(n);
    if(f.size()==1)f[0]=-1;
    return f;
}


int main(){
    int n ;
    //enter length of array
    cin>>n;

    vector<int>v;

    int x ;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    vector<int> result;
    result = subUnsort(v);

    for(int i =0;i<result.size();i++){
        cout<<result[i]<<" ";
    }



}

