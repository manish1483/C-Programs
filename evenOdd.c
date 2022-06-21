#include<stdio.h>

int main()
{
    int n;
    printf("Enter the Number greater than 1\n");
    scanf("%d", &n);

    printf("The input number is = %d\n", n);

    if(n%2 == 0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }
    return 0;
}