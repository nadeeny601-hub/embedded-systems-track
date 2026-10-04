#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x ;
    scanf ("%d",&x);
    for (int i =1 ; i<= 100 ; i++)
    {
        if (i%x ==0)
       {

       printf ("%d\n",i);
       }
    }
    return 0;
}
