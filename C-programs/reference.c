#include<stdio.h>
void reference(int *a)
{
	printf("\nValue of variable in function is %d\n",*a);
	*a=*a+100;
	printf("\nValue of variable in function after operation is %d\n",*a);

}
void main()
{
	int x =100;
	printf("\nValue of variable before calling function is %d",x);
	reference(&x); //passing value in reference
	printf("\nValue of variable after calling function is %d",x);
}
