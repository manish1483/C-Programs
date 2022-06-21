#include<stdio.h>

int main()
{
    int n;
    printf("Enter the count number to print table\n");
    scanf("%d",&n);

    printf("Entered number is =%d\n", n);

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=10; j++)
        {
            printf("%d ", i*j);
        }

        printf("\n");
    }
    return 0;
}