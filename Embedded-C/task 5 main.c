#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number  ;
    scanf("%d", &number);
    int  hours,minutes,rseconds ;
    hours  = number  / ( 60*60);
    rseconds = (number % ( 60*60));

    minutes = rseconds /60  ;
    rseconds = rseconds % 60;

    printf ( "hours : %d\n" ,hours);
    printf ( "minutes : %d\n", minutes);
    printf ( "seconds : %d\n" ,rseconds);






    return 0;
}
