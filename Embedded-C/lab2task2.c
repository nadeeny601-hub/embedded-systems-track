#include <stdio.h>
#include <stdlib.h>
//factorial

int main()
{
    int x;
    int product = 1;
    printf ( " enter the number ") ;
    scanf("%d",&x);
     while (x>0)
     { product = product * x ;
     x--;
     }

     printf("the number equals % d ", product ) ;


    return 0;
}
