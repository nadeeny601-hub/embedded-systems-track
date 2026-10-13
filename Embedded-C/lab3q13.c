#include <stdio.h>
#include <stdlib.h>
// comparing two strings

int main()
{
    char str1 [20]="hello world";
    char str2 [20];
    int i = 0;
    while (str1[i]!= '\0')
    {
       str2[i]=str1[i];
       i++;
    }
    str2[i]='\0';
    printf ("%s",str2);
    return 0;
}
