#include <bits/stdc++.h>
using namespace std;
int main()
{
    int dec=1,k=0;
    cout<<1<<"\n";
  for(int i=2;i<20;i++)
  {
      if(i%2==0)
        {dec=0;k=k+i;}
      else
         { dec=1;
          k=k+i-1;
         }
      for(int j=0;j<i;j++)
      {
          if(dec)  cout<<k--<<" ";
          else
          cout<<k++<<" ";

      }
      cout<<"\n";
  }
}
/*******************
1
2  3
6  5  4
7  8  9  10
15 14 13 12 11
16 17 18 19 20 21
28 27 26 25 24 23 22
******************/
