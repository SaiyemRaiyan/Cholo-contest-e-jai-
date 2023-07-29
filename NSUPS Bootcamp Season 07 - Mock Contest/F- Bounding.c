#include<stdio.h>
 
int main(void) 
{
	int n, x;
	scanf("%i %i", &n, &x);
	int sum = 0, ans;
 
	for(ans = 1; n >= ans; ans++) 
    {
		int tem;
		scanf("%i", &tem);
		sum += tem;
 
		if(sum > x) 
        {
			break;
		}
	}
 
	printf("%i", ans);
	return 0;
}