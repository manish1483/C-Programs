#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    char str1[] = "ABC";
    char str2[] = "ABC";

   bool res;// = strcmp(str1, str2);
   int i=0;
   while(str1[i] != '\0' && str2[i] != '\0')
   {
       if(str1[i] == str2[i])
          res = false;
        else
          res = true;

        i++;

   }

    printf("%d\n", res);
    

    return 0;
}