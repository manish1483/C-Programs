#include<stdio.h>

int main()
{
    int age;
    printf("Enter the valid age\n");
    scanf("%d", &age);

    if(age < 18) 
        printf("Not Eligible for job\n");
    else if(age >= 18 && age <=50)
        printf("Eligible for job\n");
    else if(age >50 && age <=60)
        printf("Time to Retire from the job\n");
    else
        printf("Retired from the job\n");
      
      
    return 0;
}