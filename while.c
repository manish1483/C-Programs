#include<stdio.h>

int main()
{
    int count, i=0;
    printf("Enter the loop count\n");
    scanf("%d",&count);

    while (i<count)
    {
        printf("\t \t Embedded\n");
        i++;
    }
    
    printf("Loop Ended\n");

    return 0;
}