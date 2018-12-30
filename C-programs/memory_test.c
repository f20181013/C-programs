#include<stdio.h>  
#include<stdlib.h>  
int main()
{  
  int i=0,*ptr,sum=0;    
     
   
    while(i<10000000)
         ptr=(int*)malloc(1024*1024);  //memory allocated using malloc   

    {
    if(ptr==NULL)                         
    {    
        printf("Sorry! unable to allocate memory\n\n");    
        exit(0);    
    }     
    printf("\nAllocated memory: %x Loop counter :%d\n",ptr,i);
    i++;
   // free(ptr);
    }
    
}
    /*printf("Enter elements of array: ");    
    for(i=0;i<n;++i)    
    {    
        scanf("%d",ptr+i);    
        sum+=*(ptr+i);    
    }    
    printf("Sum=%d",sum);    
    free(ptr);     
return 0;  
}    
*/