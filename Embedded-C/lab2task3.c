#include <stdio.h>
#include <stdlib.h>

// right angle triangle using asterisks

int main()
{ int n ;
 printf ( "enter the number\n");
 scanf ("%d",&n);
    for (int i = 0 ; i <= n ; i++ )
    {
        for ( int j = 0 ;  j < i+1 ; j++)
        {
            printf ("*");

        }

     printf ("\n");
    }
    return 0;
}
