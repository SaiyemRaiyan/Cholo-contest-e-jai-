#include<stdio.h>
int main()
{
 int t,m;
 int n,rev=0;
 scanf("%d",&t);
 while(t--)
 {
  scanf("%d",&n);
  rev=0;
  while(n!=0)
  {
   m=n%10;
   rev=rev*10+m;
   n=n/10;
   }
  printf("%d\n",rev);
  }
 return 0;
 }
