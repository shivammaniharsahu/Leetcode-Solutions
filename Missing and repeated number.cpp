#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

vector<int>repeatedNumber(const vector<int> &V) {
    long long n = V.size();
    long long sum = 0;
       long long squareSum = 0;
       long long temp;
       for (int i = 0; i < V.size(); i++) {
           sum = sum + (long long)V[i];
           //sum = sum -  (i + 1);
           squareSum = squareSum +  ((long long)V[i] * (long long)V[i]);
           //squareSum = squareSum - ((long long)(i + 1) * (long long)(i + 1));
       }
       sum = sum - (n*(n+1))/2;
       squareSum = squareSum - (n*(n+1)*(2*n+1))/6;
       // sum = A - B
       // squareSum = A^2 - B^2 = (A - B)(A + B)
       // squareSum / sum = A + B
       squareSum = squareSum / sum;

       // Now we have A + B and A - B. Lets figure out A and B now.
       int A = (int) ((sum + squareSum) / 2);
       int B = squareSum - A;

       vector<int> ret;
       ret.push_back(A);
       ret.push_back(B);
       return ret;
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
    vector<int>result;
    result = repeatedNumber(v);

    for(int i =0;i<result.size();i++){
        cout<<result[i]<<" ";
    }



}

