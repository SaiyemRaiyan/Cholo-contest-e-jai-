#include<stdio.h>
#include<string.h>
int main()
{

    char s[50];
    char a[50];
    int c=0;

    gets(s);
    int m;
    m=strlen(s);
    int i;

    for ( i=0; i<m; i++)
        if(s[i]=='4' || s[i]=='7')
            c++;

     if (c==4 || c==7)
          printf("YES\n");
     else
          printf("NO\n");

}
