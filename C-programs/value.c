#include<stdio.h>
void value(int);
void value(int a)
{
	printf("\nThe value of variable in function is %d \n",a);
	a=a+100;
	printf("\nThe value of variable in function after performing operation is %d \n",a);
}
int main()
{
	int x=100;
	printf("\nValue of variable before function call is %d \n",x);
	value(x);  //passing value in value
	printf("\nValue of variable after calling function is %d \n",x);
}