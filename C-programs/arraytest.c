#include<stdio.h>
#include<stdlib.h>

void main()
{
	int arr[3] = {1,4,5};
	int (*p)[3] = &arr;
	for(int i=0;i<3;i++)
	{
		printf("\nvalue of array is %d\n",*p[i]);
		printf("\nvalue of location of array is %x",p[i]);
	}

/*
int main() 
{ 
    // Pointer to an integer 
    int *p;  
      
    // Pointer to an array of 5 integers 
    int (*ptr)[6];  
    int arr[6] = { 1, 2, 3, 4, 5, 6}; 
      
    // Points to 0th element of the arr. 
    p = &arr[0]; 
      
    // Points to the whole array arr. 
    ptr = &arr;  
      
    printf("p = %u, ptr = %u\n", p, ptr); 
      
    p++;  
    ptr++; 
      
    printf("p = %u, ptr = %u\n", p, ptr); 
      */
    return 0; 
} 
