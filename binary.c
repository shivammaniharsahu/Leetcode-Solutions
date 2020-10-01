#include<stdio.h>
int main()
{
   int k[200],m,r,j=0,b=0,c=1,z[20];
   float y=0,o=0,d,g;
   printf("enter any decimal number");
   scanf("%f",&d);


 {
   r=(int)d;
   g=d-r;
   for(r;r>0;r=r/2)
   {
       j++;
      k[j]=r%2;
   }
   while(j>0)
   {
   printf("%d",k[j]);
   j--;
   }
   printf(".");

   for(g;b<5;g=o)
   {  b++;
   y=g*2;
       z[b]=(int)y;
       if(y>=1)
        o=y-1;
       else
        o=y;
   }
   while(c<5)
   {
       printf("%d",z[c]);
       c++;
   }
}




   return 0;

}
