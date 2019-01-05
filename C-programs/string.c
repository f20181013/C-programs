#include<stdio.h>  
void main ()  
{  
    char s[20];  
    printf("Enter the string?");  
    scanf("%[^\n]s",s);  
    printf("You entered %s",s);  
}  
/*
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int rows1,rows2,column1,column2;
	printf("\nEnter number of rows in first matrix\n");
	scanf("%d",&rows1);
	printf("\nEnter number of columns in first matrix\n");
	scanf("%d",&column1);
	printf("\nEnter number of rows in second matrix\n");
	scanf("%d",&rows2);
	printf("\nEnter number of columns in second matrix\n");
	scanf("%d",&column2);
	int m1[rows1][column1];
    int m2[rows2][column2];
	for(int j=0;j<rows1;j++)
	{
		for(int i=0;i<column1;i++)
		{
			
		}
	}
	*/