#include <stdio.h>
#include <stdlib.h>
//pyramid using asteriks

int main()
{
    int n ;
    printf ("enter the number\n");
    scanf ("%d",&n);

    for (int i=0 ; i< n ; i++)
    {  for ( int j= 0 ;j < n-i;j++)
    {
        printf(" ");
    }
    for ( int k =0 ; k < 2*i+1 ; k++)
    {
        printf( "*");
    }
    printf ("\n");

    }



    return 0;
}
