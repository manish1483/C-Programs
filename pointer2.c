#include<stdio.h>

int main()
{
    int arr1[]={1,2, 3, 4, 5};
    
    int *p;
    p = arr1;
    for(int i=0; i<sizeof(arr1)/sizeof(int); i++)
        printf("%d\n", *(p+i));
    

    int *ptr = arr1;

    ptr = ptr+3;

    *ptr = 6; // change the value at the address
    printf("Value at index 3 = %d\n", *ptr);
    return 0;
}