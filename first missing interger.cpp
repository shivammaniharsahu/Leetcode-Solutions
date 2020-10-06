#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int firstMissingPositive(vector<int> &A) {
    int n = A.size();
    for(int i =0;i<n;i++){

            if(A[i]>0 && A[i]<=n){
                if(A[A[i]-1]!=A[i]){
                swap(A[A[i]-1],A[i]);
                i--;//to check the swapped element's correctness
            }
        }
    }

    for(int i=0;i<n;i++){
        if(A[i]!=i+1)return i+1;
    }
    return n+1;

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
   int ans = firstMissingPositive(v);
   cout<<ans;



}

