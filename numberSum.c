#include<stdio.h>

int main()
{
    int n;

    printf("Enter the number of natural numbers");

    scanf("%d", &n);

    int sum=(n*(n+1))/2;

    printf("Sum of %d natural numbers is = %d\n", n, sum);

    return 0;
}