#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);

    printf("The number is =%d\n",n);

    if(n>0)
    {
        printf("Number is Positive\n");

        if(n%2 == 0)
        {
            printf("Number is Even\n");
        }
        else
            printf("Number is Odd\n");

    }
    else if(n<0)
    {
        printf("Number is Negative\n");

        if(n%2 == 0)
        {
            printf("Number is Even\n");
        }
        else
            printf("Number is Odd\n");

    }
    else
        printf("Number is 0\n");


    return 0;
}