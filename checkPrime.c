#include<stdio.h>
#include<stdbool.h>

int main()
{
    int n;
    bool prime;

   // while(1)
   // {
        printf("Enter the number\n");

        scanf("%d", &n);

       // prime = true;

        if(n==0 | n==1)
        {
            printf("%d is not a Prime Number\n", n);
            return 0;
        }
        else
        {
            int i=2;
            while (i<n)
            {
                if(n%i == 0)
                {
                    printf("%d is not a Prime Number\n", n); 
                    return 0;
                    //prime = false;
                }

                i++;
            }

            //if(prime)
                printf("%d is a Prime Number\n", n);
           // else
            //    break;
            
        }
   // }
    return 0;
}