#include<stdio.h>
#include <stdlib.h>
#include<string.h>
void tostring();
void main()
{
	tostring();
}
void tostring()
{
	for(int j=1;j<5;j++)
	{
		for(int space=4;space>j;space--)
		{
          printf(" ");   //1 space
		}
		  for(int i=0;i<j;i++)
		 {
			if(i==0 || i==(j-1))
			{
				printf("%c ",(char)49);
			}
			else
			{
				printf("%c ",(char)(j+47));
			}
		 } 
		printf("\n");
		
	}
	
}