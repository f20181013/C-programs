#include<stdio.h>
int main()
{
	int num=0;
	printf("\n\a Enter a number \a\n");
	scanf("%d", &num);
	if(num%2 == 0)                              //% remainder
	{
		printf("\n The number is even: %d \n", num);
	}
	else
	{
		printf("\n The number is odd:	 %d \n", num);
	}
	return 0;
}