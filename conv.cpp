#include<iostream>
using namespace std;
int main()
{

    int k[200],m,r,j=0,b=0,c=1,z[200];
    char s[200],t[200];
   float y=0,o=0,d,g;
   cout<<"enter any decimal number \n";
   cin>> d;
   cout<<"THE INPUT NO. IS: "<<d<<endl<<endl;

        {
           r=(int)d;
   g=d-r;
   for(r;r>0;r=r/2)
   {
       j++;
      k[j]=r%2;
   }
   cout<<"THE BINARY CONVERSION IS:";

   while(j>0)
   {
   cout<<k[j];
   j--;
   }
   cout<<".";

   for(g;b<8;g=o)
   {  b++;
   y=g*2;
       z[b]=(int)y;
       if(y>=1)
        o=y-1;
       else
        o=y;
   }
   while(c<8)
   {
       cout<<z[c];
       c++;
   }

        }

cout<<"\n\n";

          j=0,b=0,c=1,m,o=0,y=0;

        {
            r=(int)d;
   g=d-r;
   for(r;r>0;r=r/8)
   {
       j++;
      k[j]=r%8;


   }
   cout<<"THE OCTAL CONVERSION IS:";
   while(j>0)
   {
   printf("%d",k[j]);
   j--;
   }
   cout<<".";

   for(g;b<=6;g=o)
   {  b++;
   y=g*8;
       z[b]=(int)y;
       if(y>=1&&y<2){o=y-1;} if(y>=2&&y<3){o=y-2;} if(y>=3&&y<4){o=y-3;} if(y>=4&&y<5){o=y-4;}  if(y>=5&&y<6){o=y-5;}
        if(y>=6&&y<7){o=y-6;} if(y==7 || y==0){o==0;}  if(y>0&&y<1){o=y;}


   }
   while(c<=6)
   {
       cout<<z[c];
       c++;
   }

        }

   cout<<"\n\n";

     j=0,b=0,c=1,m,o=0,y=0;
        {
                 r=(int)d;
   g=d-r;
   for(r;r>0;r=r/16)
   {
       j++;
      k[j]=r%16;


   }
   cout<<"THE HEXADECIMAL CONVERSION IS:";
   while(j>0)
   {
       if(k[j]>9)
       {
       if(k[j]==10){s[j]='A';}   if(k[j]==11){s[j]='B';}   if(k[j]==12){s[j]='C';}   if(k[j]==13){s[j]='D';}
        if(k[j]==14){s[j]='E';}   if(k[j]==15){s[j]='F';}
  cout<<s[j];
       }
       else
        cout<<k[j];
   j--;
   }
   cout<<".";

   for(g;b<=8;g=o)
   {  b++;
   y=g*16;
       z[b]=(int)y;
       if(y>=1&&y<2){o=y-1;} if(y>=2&&y<3){o=y-2;} if(y>=3&&y<4){o=y-3;} if(y>=4&&y<5){o=y-4;}  if(y>=5&&y<6){o=y-5;}
        if(y>=6&&y<7){o=y-6;} if(y>=7&&y<8){o=y-7;} if(y>=8&&y<9){o=y-8;} if(y>=9&&y<10){o=y-9;} if(y>=10&&y<11){o=y-10;}
        if(y>=11&&y<12){o=y-11;} if(y>=12&&y<13){o=y-12;} if(y>=13&&y<14){o=y-13;} if(y>=14&&y<15){o=y-14;}
         if(y==15|| y==0){o==0;}  if(y>0&&y<1){o=y;}  if(y>15){ o=y-15;}


   }
   while(c<=8)
   {
       if(z[c]>=10)
       {
           if(z[c]==10){t[c]='A';}   if(z[c]==11){t[c]='B';}   if(z[c]==12){t[c]='C';}   if(z[c]==13){t[c]='D';}
        if(z[c]==14){t[c]='E';}   if(z[c]==15){t[c]='F';}
   cout<<t[c];
       }
       else
       {
            cout<<z[c];
       }
       c++;
   }
        }

cout<<"\n\n";

   return 0;
}
