#include<stdio.h>
#include<stdlib.h>
float average(int,int,int,int,int);
int main()
{
	int a,b,c,d,e ;
	printf("\n Going to calculate average of 5 numbers\n ");
	printf("\n Enter 5 numbers ");
	scanf("%d %d %d %d %d",&a, &b, &c, &d, &e);
	printf ("%f", average(a,b,c,d,e));
}

float average(int num1, int num2, int num3, int num4, int num5)
{
	//float avg;
	return ((float)(num1 + num2 + num3 + num4 + num5)/5);   //Division of two integer values returns integer
	//printf("\n The average is : %f",avg );
}
