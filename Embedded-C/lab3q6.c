#include <stdio.h>
#include <stdlib.h>
//minimum and maximum

int main()
{   int arr[5]={1,2,3,4,5};
    int maximum=arr[0] ;
    int minimum=arr[1] ;

    for ( int i=0 ; i<=5; i++ )
    { if ( arr[i] >maximum )
     maximum =arr[i];
    if ( arr[i]< minimum)
        minimum =arr[i];


    }
    printf ("maximum element : %d ", maximum ) ;
    printf ("minimum element : %d" , minimum ) ;





    return 0;
}
