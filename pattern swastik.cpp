#include <bits/stdc++.h>

using namespace std;


int main()
{
  int n;
  cin>>n;

  for(int i=0;i<n;i++)
  {
      if(i==n/2)
      {for(int j=0;j<n;j++)
      cout<<"*";cout<<"\n";}
      else
      if(i<n/2)
      {   cout<<"*";
          if(i==0)
           { for(int j=1;j<n/2;j++)
           cout<<" ";
               for(int j=n/2;j<n;j++)
           cout<<"*";
           }
           else

          {
          for(int j=0;j<(n/2)-1;j++)
           cout<<" ";
           cout<<"*";}

           cout<<"\n";
      }
      else
      if(i>n/2)
      {
          if(i==n-1)
           {for(int j=0;j<=n/2;j++)
           cout<<"*";
           for(int j=(n/2)+1;j<n-1;j++)
           cout<<" ";
           cout<<"*";
           }

          else{
          for(int j=0;j<(n/2);j++)
           cout<<" ";
           cout<<"*";
           for(int j=(n/2)+2;j<n;j++)
            cout<<" ";
           cout<<"*";}
           cout<<"\n";


      }
  }
}
