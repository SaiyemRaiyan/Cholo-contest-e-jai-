#include<stdio.h>

int main(void)
 {
	
	int n,num,rem=0;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
	    int sum=0;
	    scanf("%d",&num);
	    while(num!=0){
	        rem=num%10;
	        sum+=rem;
	        num=num/10;
	    }
	    
	    printf("%d\n",sum);
	}
	
	return 0;
}
