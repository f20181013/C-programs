#include<stdio.h>  
void average(float, float, float, float, float);  
void main()  
{  
    float a,b,c,d,e;   
    printf("\nGoing to calculate the average of five numbers:");  
    printf("\nEnter five numbers:");  
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);  
    average(a,b,c,d,e);  
}  
void average(float a, float b, float c, float d, float e)  
{  
    float avg = (a+b+c+d+e)/5;    
    
    printf("The average of given five numbers : %f",avg);  
}  