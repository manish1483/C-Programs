#include<stdio.h>

int main()
{
    int val;
    printf("Enter the Number");

    scanf("%d", &val);

    if(val>=0)
    {
        printf("Number is positive\n");
    }
    else{
        printf("Number is negative\n");
    }
    return 0;
}