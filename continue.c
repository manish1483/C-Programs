#include<stdio.h>

int main()
{
    int x, n;

    printf("Enter the value of x and n\n");
    scanf("%d %d", &x, &n);

    for(int i=0; i<=n; i++)
    {
        if(i%x == 0)
            continue;

        printf("%d ", i);
    }

    printf("\n");
    
    return 0;
}