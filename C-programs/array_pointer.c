#include<stdio.h>
#include<stdlib.h>  
int show();  
int showadd(int);  
int (*arr[2])();    //*arr is a pointer array of functions of size 2
int (*(*ptr)[2])();  //*(*ptr) is a pointer to a pointer array of functions of size 2(arr)
  
int main ()  
{  
    int result1;  
    arr[0] = show;  
    arr[1] = showadd;  
    ptr = &arr;  
    result1 = (**ptr)();  
    printf("printing the value returned by show : %d",result1);  
    (*(*ptr+1))(result1);  
}  
int show()  
{  
    int a = 65;  
    return a;  
}  
int showadd(int b)  
{  
    printf("\nAdding 90 to the value returned by show: %d",b+90);  
}  