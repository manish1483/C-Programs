#include<stdio.h>


int stringLen(char *str)
{
    int len=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        len++;
    }

    return len;
}

int main()
{
    char str[] = "test string ";

   // int strLength = stringLen(str);

    printf("%d\n", stringLen(str));
    return 0;
}