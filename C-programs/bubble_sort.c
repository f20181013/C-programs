#include<stdio.h>
#include<stdlib.h>
void sort(int,int,int,int,int);
void sort(int a,int b,int c,int d,int e)
{
	int arr[5]={a,b,c,d,e};
	int temp=0;
	int i=0;
	for(int j=0;j<5;j++)
	{
	     for(int i=j;i<5;i++)
	     {
		     if(arr[j] > arr[i])
		     {
			     temp=arr[j];
                 arr[j]=arr[i];
                 arr[i]=temp;
		     }
		   
	     }
	     printf("\n%d\n",arr[j]);
    }

}
void main()
{
	int num1,num2,num3,num4,num5;
	printf("\nEnter first number\n");
	scanf("%d",&num1);
	printf("\nEnter second number\n");
	scanf("%d",&num2);
	printf("\nEnter third number\n");
	scanf("%d",&num3);
	printf("\nEnter fouth number\n");
	scanf("%d",&num4);
	printf("\nEnter fifth number\n");
	scanf("%d",&num5);
	sort(num1,num2,num3,num4,num5);
}