#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<curses.h>
#include<string.h>
#include<math.h>
void toString(int,char[]);
void digits(int);
static int num_digits;
int num;
void toInt(char []);
static char str[100];
extern void digits(int num1)
{

	while(num1>=1)
	{
		num1 = num1/10;
		num_digits++;		
	}
	printf("\nnumber of digits : %d\n",num_digits);
}
extern void toString(int numInt,char numtoString[])
{
	    numtoString[num_digits];
	    numtoString[num_digits] = '\0';

    for(int k= (num_digits - 1);k>=0;k--)
    {
         int rem = numInt % 10;
         numInt = numInt/10;
         numInt = floor(numInt);
         numtoString[k] = rem + '0';		
    }

    printf("\nNumber in string form is :%s\n",numtoString);

}
extern void toInt(char numChar[num_digits])
{
	int chartoNum = numChar[0] - '0';
	for(int l=0;l<(strlen(numChar) - 1);l++)	
	{
		
		chartoNum = chartoNum*10;
		chartoNum = chartoNum + (numChar[l+1] - '0');

	}
	printf("\nNumber in Integer form is :%d\n",chartoNum);
}
void main()
{
	printf("\nEnter a Number\n");	
	scanf("%d",&num);
	digits(num);
	toString(num,str);
    toInt(str);

}