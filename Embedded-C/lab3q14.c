#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//converting lower case to upper case

int main()
{
    printf("Hello world!\n");
    char str[]="my name is nadeen";
    for (int i=0;i<strlen(str);i++)
   {
       if (str[i]>=97 && str[i]<=122)

       str[i]=str[i]-32 ;
   }    printf("%s",str);

    return 0;
}
