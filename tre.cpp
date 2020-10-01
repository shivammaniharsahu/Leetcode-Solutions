 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
int left,  right;
cin>>left>>right;
 vector <int> v;int h=0,k=0,y,i,b;


       for(i=left;i<=right;i++)
       {   y=i;h=0;
       if(i%10==0)
       continue;
          while(y>0)
          {
              k=y%10;

              if((i%k)==0)
              {
                  continue;
              }
              else {
              h=1;break;
              }
              y=y/10;

          }
        if(h==0)
           cout<<i<<" ";
       }


    for(int j=0;j<v.size();j++)
    {
        cout<<v[j]<<" ";
    }
    return 0;
 }
