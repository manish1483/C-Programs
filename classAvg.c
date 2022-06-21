#include<stdio.h>

int main()
{
    int n, sum=0, val;
    printf("Enter the total number of subjects");
    scanf("%d", &n);

    printf("Enter the marks of all subjects");
   
    for(int i=0; i<n; i++)
    {
        scanf("%d", &val);

        sum += val;
    }

    int avg = sum/n; 
    //printf("Enter the 5 subject marks\n");

    //scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);

   // int avg = (s1+s2+s3+s4+s5)/5;
    printf("Avg of the all subject is = %d\n", avg);

    if(avg > 70)
        printf("Distinction\n");
    else if(avg > 60 && avg <=70)
        printf("1st Class\n");
    else if(avg >= 50 && avg <= 60)
        printf("2nd Class\n");
    else if(avg<=30)
        printf("failed\n");

    return 0;
}