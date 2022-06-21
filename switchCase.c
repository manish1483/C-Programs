#include<stdio.h>

int main()
{
    char op;
    double a, b;

    printf("Please enter the valid operator('+', '-', '*', '/')");
    scanf("%c", &op);

    printf("Enter the 2 operands");
    scanf("%lf %lf", &a, &b);

    switch (op)
    {
    case '+':
        printf("%.lf + %.lf =%.lf\n", a, b, a+b);
        break;
    case '-':
        printf("%.lf - %.lf =%.lf\n", a, b, a-b);
        break;
    case '*':
        printf("%.lf * %.lf =%.lf\n", a, b, a*b);
        break;
    case '/':
        printf("%.lf / %.lf =%.lf\n", a, b, a/b);
        break;
    default:
        printf("You entered the wrong operator");
        break;
    }
    return 0;
}