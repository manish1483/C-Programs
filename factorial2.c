#include<stdio.h>

int main()
{
    int n;
    printf("Enter any positive number to find factorial\n");
   

    while(1)
    {
        scanf("%d",&n);

        printf("Entered number is = %d\n", n);
        if(n>0)
        {
            int fact=1;
            for(int i=n; i>=1; i--)
            {
                fact *= i;
            }
            printf("%d = %d \n", n, fact);
        }
        printf("Enter the \"0\" to exit\n");

        if(n==0)
            break;
    }
    return 0;
}