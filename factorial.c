#include<stdio.h>

int main()
{
    int n;
    printf("Enter any positive number to find factorial\n");
    scanf("%d",&n);

    printf("Entered number is = %d\n", n);

    int fact=0;
    for(int i=n; i>=1; i--)
    {
        fact =1;
        for(int j=i; j>=1; j--)
        {
           fact *= j;
        }

        printf("%d = %d \n", i, fact);
    }
    return 0;
}