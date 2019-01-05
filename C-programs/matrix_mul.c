#include <stdio.h>
#include <stdlib.h>
void main()
{
	int n,i,*ptr,sum=0;    
    printf("Enter number of matrices: ");    
    scanf("%d",&n);    
    ptr=(int*)malloc(n*sizeof(int));  //memory allocated using malloc    
	int matrix[n*2];
	int num=1;
	int position=0;
	for(int i=0;i<n;i++)
	{
		printf("\nEnter number of rows in matrix %d\n",num);
	    scanf("%d",&matrix[position]);
	    printf("\nEnter number of columns in matrix %d\n",num);
	    scanf("%d",&matrix[position+1]);
	    int array[matrix[position]][matrix[position+1]];
	    num++;
	    position+=2;
	
	}

}
	