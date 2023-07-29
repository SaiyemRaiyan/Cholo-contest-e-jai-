#include<stdio.h>

int main(void)
 {
	int i,f,l,sum=0;
	long int n;
	scanf("%d",&i);
	while(i--)
	{
	    sum=0;
	    scanf("%ld",&n);
	    l= n%10; 
	    while(n)   
	    {
	        f=n%10;
	        n=n/10;
	    }
	    sum= f+l;
	    printf("%d\n",sum);
	}
	return 0;
        getch();
}

