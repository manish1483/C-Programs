#include<stdio.h>

 int main()
 {
     int n;

     printf("Enter the number to print Triangle star pattern");

     scanf("%d", &n);

     for(int i=1; i<=n; i++)
     {
         for(int j=0; j<i; j++)
         {
             printf(" * ");
         }

         printf("\n");
     }
     return 0;
 }