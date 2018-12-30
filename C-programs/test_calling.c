#include<stdio.h>
#include<stdlib.h>
#include "average_new.h"
int main()
{
	int a,b,c,d,e ;
	printf("\n Going to calculate average of 5 numbers\n ");
	printf("\n Enter 5 numbers ");
	scanf("%d %d %d %d %d",&a, &b, &c, &d, &e);
	printf ("\n %f \n", average2(a,b,c,d,e));
	printf ("\n Sum is %f \n", add(a,b,c,d,e));
}


