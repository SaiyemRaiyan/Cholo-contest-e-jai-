#include<stdio.h>
#include<string.h>
 
int main()
{
    char str[50];
 
    gets(str);
 
    if(strcmp(str, "Sunny")==0)
                    printf("Cloudy");
    if(strcmp(str, "Cloudy")==0)
              printf("Rainy");
    if(strcmp(str, "Rainy")==0)
                printf("Sunny");
 
    return 0;
    getch();
}