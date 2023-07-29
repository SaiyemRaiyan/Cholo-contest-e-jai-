#include<stdio.h>
#include<stdlib.h>
 
int main()
{
long int a,b,s;
scanf("%ld %ld", &a, &b);
    if((a%2!=0 && b%2==0)||(a%2==0 && b%2!=0))
{
     printf("IMPOSSIBLE\n");
}
else
{
         s=((a+b)/2);
   printf("%ld\n",s);
}
 
    return 0;
    getch();
}