#include<stdio.h>  
void main ()  
{  
    char s[20];  //test
    printf("Enter the string?");  
    scanf("%[^\n]s",s);  
    printf("You entered %s",s);  
}  