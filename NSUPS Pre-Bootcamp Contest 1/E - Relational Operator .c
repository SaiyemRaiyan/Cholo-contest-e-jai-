#include<stdio.h>
int main()
{
    int a[100],b[100],n,i;
    scanf("%d\n",&n);

     for(i=1;i<=n;i++)
     {
         scanf("%d %d", &a[i], &b[i]);
     }
     for(i=1; i<=n; i++)
     {
         if(a[i] < b[i])
         printf("<\n");
         else if(a[i] > b[i])
         printf(">\n");
         else if(a[i] == b[i])
         printf("=\n");
     }
     return 0;
}