#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,j;
	printf("\nEnter number of rows in matrix\n");
	scanf("%d",&i);
	printf("\nEnter number of clomns in matrix\n");
	scanf("%d",&j);
	int arr[i][j];
	for(int k=0;k < i;k++)
	{
		for(int l=0;l < j;l++)
		{
			printf("\nEnter [%d][%d]\n",k,l);
			scanf("%d",&arr[k][l]);
		}
	}
	for(int m=0;m<i;m++)   //printing matrix
	{
		for(int n=0;n<j;n++)
		{
			printf("%d\t",arr[m][n]);
		}
		printf("\n");
	}

}