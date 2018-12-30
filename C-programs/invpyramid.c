#include<stdio.h>
#include<stdlib.h>
void main()
{
    static int space=0;
	for(int j=7;j > 0;j--)
	{
	
		for(int i=1;i <= j;i++)
		{
			
			printf("%d",i);

		}
		if(space!=0)
		{
		   printf(" ");  //1 space
	    }
		for(int x=1;x<space;x++)
		{	
		   printf("  ");     //2 space
		}  

		
		for(int l=j;l > 0;l--)
		{
			if(l!=7)
			{
                printf("%d",l);
			}
			

		}

		
		printf("\n");
		space++;
	}
}