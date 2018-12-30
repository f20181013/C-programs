#include<stdio.h>
#include<stdlib.h>
void main()
{
	int k = 1;
	int lines = 0;
	printf("\nEnter number of lines:");
	scanf("%d",&lines);
	for(int j=1;j <= lines;j++)
	{
		for(int l=(lines-j);l >0 ;l--)
			{
				printf(" ");  //1 space
			}
		for(int i=1;i <= j;i++)
		{
			
			printf("%d ",k);
			k++;
		}
		printf("\n");
	}
}