#include <stdio.h>
#include <stdlib.h>
//decimal to binary

int main()
{    int number ;
     printf ("enter the number");
     scanf ("%d",&number) ;

     int i =0 ;
    int arr[16];

    while (number!=0)
    {
        arr[i]= number % 2;
        number = number / 2 ;
        i++;
    }
     i--;
    while (i>=0)

    { printf("%d",arr[i]);
      i--;
    }
    return 0 ;
}
