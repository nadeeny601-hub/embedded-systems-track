#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//number of words in a string

int main()
{ int count=0 ;
    printf("Hello world!\n");
    char str []="my name is nadeen";
    for (int i=0; i<strlen(str);i++)
    {
        if (str[i]==' ')
        {
            count++;
        }
    }
    printf( " number of words : %d ", count+1 ) ;
    return 0;
}
