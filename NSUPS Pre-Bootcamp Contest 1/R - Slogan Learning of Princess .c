#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100][100],m,tmp[100];
    int a,b,i,j,l,n=0;
    scanf("%d",&a);   
    scanf("%c",&m);
    for(b=0; n<a*2; b++)
    {
        gets(arr[b]);
        n++;
    }
    scanf("%d",&l);
    for(i=0; i<=l; i++)       
    {
        gets(tmp);
        for(j=0; j<b; j=j+2)
        {
            if(strcmp(tmp,arr[j])==0)
            {
                puts(arr[j+1]);
                break;
            }
        }
    }
    return 0;
    getch();
}

