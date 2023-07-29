#include<stdio.h>
#include<stdlib.h>
 
 
int main()
{  
  int n,i,j=0;
 
scanf("%d",&n);
for(i=0 ;i<n; i++)
{
   int a[n];
  scanf("%d",&a[i]);
  {
   if(a[i]!=i+1)
   {
       j++;
   }
  }
 
 
}
     if(j>2)
  {
    printf("NO\n");
  }
else
  {
    printf("YES\n");
  }
 
 
    return 0;
     getch();
}