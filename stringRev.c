#include<stdio.h>
#include<string.h>


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
    char str[100] = "ABC";
    char rev[100];


    int strLength = stringLen(str);

    int j=0;
    for(int i=strLength-1; i>=0; i--)
    {
        rev[j++] = str[i];
    }

    rev[j] = '\0';
       
    printf("Reverse String is = %s", rev);

    printf("\n");
    return 0;
}