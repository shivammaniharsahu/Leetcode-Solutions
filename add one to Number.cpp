#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

vector<int> plusOne(vector<int> &A) {

    int n = A.size();
    vector<int>v;
    reverse(A.begin(),A.end());
    int carry = 1;//as we want to add 1 at last

    for(int i =0;i<n;i++){
        int sum = A[i] + carry;
        v.push_back(sum%10);
        carry = sum/10;
    }
    while(carry){ // this is for case like 9 9 9 9 so at last carry will be that we not added.
        v.push_back(carry%10);
        carry/= 10;
    }

    while(v[v.size()-1]==0 && v.size()>1){
        v.pop_back();
    } // this is for to remove leading zeros like 0 0 0 0 -> 1
    reverse(v.begin(),v.end());
    return v;
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
    result = plusOne(v);

    for(int i =0;i<result.size();i++){
        cout<<result[i]<<" ";
    }



}

