#include<stdio.h>
int main()
{
   char a[20],b[10];
   int i=0,k=0,e=0,f=0;
   gets(a);
   gets(b);
   e=strlen(a);
   f=e+strlen(b);
   for(i=e;i<=f;i++)
   {
      a[i]=b[i-e];
   }
   puts(a);
   return 0;
}
