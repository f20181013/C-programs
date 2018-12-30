#include<stdio.h>  
void main ()  
{  
    char s[11] = "javatpoint";  
    char *p = s; // pointer p is pointing to string s.   
    printf("%s",p); // the string javatpoint is printed if we print p.
    for(int i=0;i<10;i++)
    {
    	printf("%c",*(p+i));
    }  
}  