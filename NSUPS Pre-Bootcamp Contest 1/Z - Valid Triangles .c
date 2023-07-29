#include<stdio.h>

int main(void) 

 { 
     int n,i,a,b,c,sum;
     scanf("%d",&n);
     for(i=0; i<n; i++)
     {
         
         scanf("%d\t", &a);
         scanf("%d\t", &b);
         scanf("%d\t", &c);
         sum=a+b+c;
         if(sum==180)
         {
             printf("YES\n");
         }
         else
         {
             printf("NO\n");
         }
         
     }
        return 0;
        getch();
}

