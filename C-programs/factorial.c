#include<stdio.h>
#include<stdlib.h>
	void main()
	{
		int fact =1;
		int x=0;
		printf("\nEnter a number \n");
		scanf("%x",&x);
		if(x==0)
		{
			printf("\nThe factorial is 0\n");
		}
		if(x==1)
		{
			printf("\nThe factorial is 1\n");
		}
		else
		{
			for(int i=2;i<=x;i++)
			{
				fact=fact*i;
			}
			printf("\nThe factorial is %d\n",fact);

		}
	}