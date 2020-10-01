#include<stdio.h>
int main()
{
   char ch;
   printf("enter char \n");
   scanf("%c",&ch);
   int d=(int)ch;
  if((d>=65 && d<=90)||(d>=97 && d<=122))
  {

  if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
  {
   printf("vovel");
  }
   else
    printf("constant");
  }
  else
    printf("not alphabet");

   return 0;
}
