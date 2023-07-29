#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a,i,fact=1;
        scanf("%d",&a);
        for(int i=1; i<=a; i++)
        {
            fact = fact * i;
        }
        printf("%d\n",fact);

    }
    return 0;
}
