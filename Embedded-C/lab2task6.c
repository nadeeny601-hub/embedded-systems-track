#include <stdio.h>
#include <stdlib.h>

#include <time.h>
// generate a random number


int main()
{
    srand(time(NULL));
    int random = rand()%101;
    int number =0 ;
    while ( number != random)
    {   printf ("guess the number\n") ;
        scanf("%d",&number);
        if (number == random )
            printf ("correct guess");
        else if ( number > random)
                printf(" the number you entered is higher\n") ;
        else
          printf( " the number you entered is lower\n") ;


    }



    return 0;
}
